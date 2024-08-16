#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// common_len은 배열 common의 길이입니다.
int solution(int common[], size_t common_len) {
    int answer = 0;
    int sum = 0, mul = 0;
    
    if((common[1] - common[0]) == (common[2] - common[1])) {
        sum = common[1] - common[0];
    }
    else {
        mul = common[1] / common[0];
    }
    
    if(!mul) {
        answer = common[common_len-1] + sum;
    } else {
        answer = common[common_len-1] * mul;
    }
    
    return answer;
}