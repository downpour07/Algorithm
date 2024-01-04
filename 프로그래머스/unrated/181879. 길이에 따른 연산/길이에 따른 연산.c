#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int num1 = 0;
    int num2 = 1;
    if(num_list_len >= 11)
        for(int i = 0; i<num_list_len; i++) {
            num1 += num_list[i];   
            answer = num1;
        }
    else
        for(int i = 0; i<num_list_len; i++) {
            num2 *= num_list[i];   
            answer = num2;
        }
    return answer;
}