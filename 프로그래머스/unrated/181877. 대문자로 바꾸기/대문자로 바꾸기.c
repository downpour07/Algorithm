#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* myString) {
    char str[100001] = {0};
    for(int i = 0; i<100001; i++) {
        if(myString[i] >= 97 && myString[i] <= 122) str[i] = myString[i]-32;
        else str[i] = myString[i];
    }
    char* answer = (char*)malloc(100001*sizeof(char*));
    strcpy(answer, str);
    return answer;
}