#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while(true) {
        if(n == 0) break;
        
        answer += n % 10;
        n /= 10;
    }
    
    return answer;
}