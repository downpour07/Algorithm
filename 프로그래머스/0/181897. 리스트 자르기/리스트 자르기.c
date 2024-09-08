#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// slicer_len은 배열 slicer의 길이입니다.
// num_list_len은 배열 num_list의 길이입니다.
int* solution(int n, int slicer[], size_t slicer_len, int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(num_list_len * sizeof(int));
    int a = 0;
    
    switch(n) {
        case 1:
            for(int i = 0; i<=slicer[1]; i++)
                answer[a++] = num_list[i];
            break;
        case 2:
            for(int i = slicer[0]; i<=num_list_len; i++)
                answer[a++] = num_list[i];
            break;
        case 3:
            for(int i = slicer[0]; i<=slicer[1]; i++)
                answer[a++] = num_list[i];
            break;
        case 4:
            for(int i = slicer[0]; i<=slicer[1]; i+=slicer[2])
                answer[a++] = num_list[i];
            break;
        default:
            break;
    }
    
    return answer;
}