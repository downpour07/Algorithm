#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    if(arr_len % 2 == 0) {
        for(int i = 1; i<arr_len; i+=2) {
            arr[i] += n;
        }
    }
    else {
        for(int i = 0; i<arr_len; i+=2) {
            arr[i] += n;
        }
    }
    
    int* answer = (int*)malloc(1000*sizeof(int*));
    memcpy(answer, arr, 1000*sizeof(arr));
    return answer;
}