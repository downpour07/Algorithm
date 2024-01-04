#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, const char* overwrite_string, int s) {
    char* answer = (char*)malloc(1000*sizeof(char*));
    char s1[1001], s2[1001];
    strcpy(s1, my_string);
    strcpy(s2, overwrite_string);
    int d = s;
    for(int i = 0; s2[i] != '\0'; i++) {
        s1[i+d] = s2[i];
    }
    strcpy(answer, s1);
    return answer;
}