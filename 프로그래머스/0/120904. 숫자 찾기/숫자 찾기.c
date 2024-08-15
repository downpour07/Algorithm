#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int num, int k) {
    int answer = -1;
    int len = 0, a = num;
    
    while(a) {
        len++;
        a = a/10;
    }
    
    a = num;
    
    for(len; len>0; len--) {
        if(a % 10 == k) {
            answer = len;
        }
        a /= 10;
    }
    
    return answer;
}