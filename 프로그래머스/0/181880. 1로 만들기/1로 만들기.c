#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    
    for(int i = 0; i<num_list_len; i++) {
        int n = num_list[i];
        while(1) {
            if(n == 1) break;
            if(n % 2) n--;
            n /= 2;
            answer++;
        }
    }
    
    return answer;
}