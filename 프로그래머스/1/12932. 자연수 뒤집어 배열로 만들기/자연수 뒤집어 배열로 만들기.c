#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(11 * sizeof(int));
    int a = 0;
    
    while(true) {
        if(n == 0) break;
        
        answer[a++] = n % 10;
        n /= 10;
    }
    
    return answer;
}