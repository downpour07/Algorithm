#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len, int n) {
    int arr[30];
    for(int i = 0; i<n; i++) {
        arr[i] = num_list[i];
    }
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(30*sizeof(int*));
    memcpy(answer, arr, sizeof(arr));
    return answer;
}