#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    int x = b;
    int i;
    for(i = 0; i<5; i++) {
        if(x == 0) break;
        x /= 10;
    }
    int y = a;
    for(i; i>0; i--) y*=10;
    y += b;
    x = 2*a*b;
    if(x > y) answer = x;
    else answer = y;
    return answer;
}