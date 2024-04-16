#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int num1 = 0, num2 = 0;
    int i = 0, j = 0;
    int count = 0;
    
    for(i = 0; i<numbers_len; i++) {
        if(numbers[i] > num1) {
            num1 = numbers[i];
            count = i;
        }
    }
    for(j = 0; j<numbers_len; j++) {
        if(numbers[j] > num2 && count != j) num2 = numbers[j];
    }
    answer = num1 * num2;
    return answer;
}