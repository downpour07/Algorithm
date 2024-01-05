#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* str1, const char* str2) {
    char s1[11];
    char s2[11];
    
    strcpy(s1, str1);
    strcpy(s2, str2);
    char str[22];
    int a = 0;
    for(int i = 0; i<22; i+=2) {
        str[i] = s1[a];
        str[i+1] = s2[a];
        a++;
    }
    
    char* answer = (char*)malloc(10*sizeof(char*));
    strcpy(answer, str);
    return answer;
}