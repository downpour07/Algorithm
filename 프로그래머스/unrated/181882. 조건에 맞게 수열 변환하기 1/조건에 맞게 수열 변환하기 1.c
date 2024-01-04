#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    int* answer = (int*)malloc(1000000*sizeof(int*));
    for(int i = 0; i<arr_len; i++) {
        if(arr[i] >= 50 && arr[i] % 2 == 0) answer[i] = arr[i] / 2;
        else if(arr[i] < 50 && arr[i] % 2 != 0) answer[i] = arr[i] * 2;
        else answer[i] = arr[i];
    }
    return answer;
}