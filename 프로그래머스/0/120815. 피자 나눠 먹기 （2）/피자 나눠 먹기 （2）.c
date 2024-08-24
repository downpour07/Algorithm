#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int p = 6;
    int m = 0;
    for(int i = 1; i<100; i++) {
        if(n%i == 0 && p % i == 0) {
            m = i;
        }
    }
    
    answer = (m * (n / m) * (p / m)) / 6;
    return answer;
}