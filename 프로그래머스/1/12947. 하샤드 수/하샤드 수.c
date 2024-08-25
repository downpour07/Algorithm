#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = false;
    int s = x, sum = 0;
    
    while(true) {
        if(s == 0) break;
        else {
            sum += s % 10;
            s /= 10;
        }
    }
    
    if(!(x % sum)) answer = true;
    else false;
    
    return answer;
}