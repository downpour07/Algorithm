#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
        while (true)
        {
            if (n % answer == 1) break;
            answer++;
        }
    
    return answer;
}