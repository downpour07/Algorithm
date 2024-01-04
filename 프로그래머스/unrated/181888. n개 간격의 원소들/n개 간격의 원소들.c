#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len, int n) {
    int arr[20];
    int a = 0;
    for(int i = 0; i<num_list_len; i++)
        if(i%n == 0)
            arr[a++] = num_list[i];
    int* answer = (int*)malloc(20*sizeof(int*));
    memcpy(answer, arr, sizeof(arr));
    return answer;
}