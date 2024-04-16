#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = n*12000 + k*2000;
    for(int i = 0; i<n/10; i++) {
        answer -= 2000;
    }
    return answer;
}