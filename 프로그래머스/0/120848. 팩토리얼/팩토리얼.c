#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int factor(int i){
    int num=i;
    if(i<=1)
    {
        return 1;
    }
    return i*factor(i-1);
}

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i <= n; i++){
        answer = factor(i);
        
        if(answer >= n){
            if(answer == n) return i;
            return i-1;
        }
    }
}