#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(10*sizeof(int*));
    int arr[11];
    int i;
    for(i = 0; i<num_list_len; i++) {
        arr[i] = num_list[i];
    }
    if(num_list[num_list_len-1] > num_list[num_list_len-2])
        arr[i] = num_list[num_list_len-1] - num_list[num_list_len-2];
    else 
        arr[i] = num_list[num_list_len-1] * 2;
    memcpy(answer, arr, sizeof(arr));
    return answer;
}