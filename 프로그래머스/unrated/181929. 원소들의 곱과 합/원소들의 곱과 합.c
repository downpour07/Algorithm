#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int sum = 0;
    int mult = 1;
    for(int i = 0; i<num_list_len; i++) {
        mult *= num_list[i];
        sum += num_list[i];
    }
    sum = sum * sum;
    int answer = 0;
    if(mult < sum) answer = 1;

    return answer;
}