#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    int str[50];
    for(int i = start_num; i <= end_num; i++) {
        str[i-start_num] = i;
    }
    int* answer = (int*)malloc(50*sizeof(int*));
    memcpy(answer, str, sizeof(str));
    return answer;
}