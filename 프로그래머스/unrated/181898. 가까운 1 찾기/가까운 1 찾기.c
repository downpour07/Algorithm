#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int solution(int arr[], size_t arr_len, int idx) {
    int answer = -1;
    for(int i = idx; i<arr_len; i++) {
        if(arr[i]) {
            answer = i;
            break;
        }
    }
    return answer;
}