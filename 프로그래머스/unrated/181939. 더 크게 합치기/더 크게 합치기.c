#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    int x = a, y = b;
    int i, j;
    
    for(i = 0; i<5; i++) {
        if(y == 0) {
            break;
        }
        y /= 10;
    }
    for(j = 0; j<5; j++) {
        if(x == 0) {
            break;
        }
        x /= 10;
    }
    
    x = a, y = b;
    
    for(i; i>0; i--) {
        x *= 10;
    }
    for(j; j>0; j--) {
        y *= 10;
    }
    
    x += b;
    y += a;
    
    if(x > y) answer = x;
    else answer = y;
    
    return answer;
}