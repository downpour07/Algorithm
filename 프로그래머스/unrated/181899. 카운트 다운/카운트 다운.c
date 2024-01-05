#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start, int end_num) {
    int arr[50] = {0};
    int a = 0;
    for(int i = start; i>=end_num; i--) {
        arr[a++] = i;
    }
    int* answer = (int*)malloc(50*sizeof(int*));
    memcpy(answer, arr, sizeof(arr));
    return answer;
}