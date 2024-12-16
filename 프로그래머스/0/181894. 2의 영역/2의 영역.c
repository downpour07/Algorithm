#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(arr_len*sizeof(int));
    int start = -1, final = -1;
    
    for(int i = 0; i<arr_len; i++) {
        if(arr[i] == 2 && start == -1) {
            start = i;
        }
        else if(arr[i] == 2 && start != -1) {
            final = i;
        }
    }
    
    printf("%d %d", start, final);
    
    if(start != -1 && final != -1) {
        for(int i = start; i <= final; i++) {
            answer[i-start] = arr[i];
        }
    }
    else if(start != -1 && final == -1) {
        answer[0] = 2;
    }
    else {
        answer[0] = -1;
    }
    
    return answer;
}