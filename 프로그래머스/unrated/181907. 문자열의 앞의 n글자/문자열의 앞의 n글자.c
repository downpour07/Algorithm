#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int n) {
    char str[1001] = {0};
    for(int i = 0; i<n; i++) {
        str[i] = my_string[i];
    }
    char* answer = (char*)malloc(1000*sizeof(char*));
    strcpy(answer, str);
    return answer;
}