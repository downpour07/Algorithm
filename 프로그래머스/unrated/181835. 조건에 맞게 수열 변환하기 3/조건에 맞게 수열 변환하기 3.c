#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int k) {
    int* answer = (int*)malloc(1000000*sizeof(int*));
    if(k%2==0) {
        for(int i = 0; i<arr_len; i++)
            answer[i] = arr[i] + k;
    } else {
        for(int i = 0; i<arr_len; i++)
            answer[i] = arr[i] * k;
    }
    
    return answer;
}