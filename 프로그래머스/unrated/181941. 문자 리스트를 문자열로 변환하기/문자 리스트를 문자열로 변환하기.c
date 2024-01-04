#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* arr[], size_t arr_len) {
    char str[201] = {0};
    for(int i = 0; i<arr_len; i++) {
        str[i] = *arr[i];
    }
    char* answer = (char*)malloc(200*sizeof(char*));
    strcpy(answer, str);
    return answer;
}