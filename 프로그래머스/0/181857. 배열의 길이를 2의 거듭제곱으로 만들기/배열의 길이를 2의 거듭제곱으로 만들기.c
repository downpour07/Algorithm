#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = 1;
    while(size < arr_len) {
        size *= 2;
    }
    
    printf("%d", size);
    
    int* answer = (int*)calloc(size, sizeof(int));
    for(int i = 0; i < arr_len; i++) {
        answer[i] = arr[i];
    }
    
    return answer;
}