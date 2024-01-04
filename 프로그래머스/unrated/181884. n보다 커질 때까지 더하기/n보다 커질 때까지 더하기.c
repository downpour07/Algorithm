#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int n) {
    int sum = 0;
    for(int i = 0; i<numbers_len; i++) {
        if(sum > n) break;
        sum += numbers[i];
    }
    int answer = sum;
    return answer;
}