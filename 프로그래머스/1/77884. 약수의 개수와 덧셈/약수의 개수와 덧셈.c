#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int left, int right) {
    int answer = 0;
    
    for(int i = left; i<=right; i++) {
        if((int)sqrt(i) == sqrt(i)) {
            answer -= i;
        }
        else answer += i;
    }
    
    return answer;
}