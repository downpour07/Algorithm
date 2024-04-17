#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 2;
    for(int i = 1; i<n/2; i++) {
        if(i*i == n) {
            answer = 1;
        }
    }
    return answer;
}