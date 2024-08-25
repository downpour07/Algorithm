#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int count = 0;
    long long n = num;
    
    if(n == 1) return 0;
    
    while(true) {
        if(n == 1) break;
        
        if(n % 2 == 0) {
            n /= 2;
            count++;
        }
        else {
            n *= 3;
            n += 1;
            count++;
        }
        
        if(count == 500) return -1;
    }
    
    return count;
}