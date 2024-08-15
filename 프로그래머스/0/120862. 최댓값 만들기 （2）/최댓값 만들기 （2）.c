#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = INT_MIN;
    
    for(int i = 0; i<numbers_len; i++) {
        for(int j = i+1; j<numbers_len; j++) {
            if(numbers[i]*numbers[j] >= answer) {
                answer = numbers[i]*numbers[j];
            }
        }
    }
    
    return answer;
}