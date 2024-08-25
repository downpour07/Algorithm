#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long answer = 0;
    
    double a = sqrt(n);
    
    if(a == (int)a)
        return (a+1) * (a+1);
    
    else return -1;
}