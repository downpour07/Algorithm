#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0, max = 0;
    for(int i = 0; i<sides_len; i++) {
        if(sides[i] > sides[max]) max = i;
    }
    
    if(max == 0)
        answer = (sides[1]+sides[2]>sides[0]) ? 1 : 2;
    else if(max == 1) 
        answer = (sides[0]+sides[2]>sides[1]) ? 1 : 2;
    else answer = (sides[0]+sides[1]>sides[2]) ? 1 : 2;
    
    return answer;
}