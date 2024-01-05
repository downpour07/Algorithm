#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    char* string = (char*)malloc(100*sizeof(char*));
    strcpy(string, myString);
    int answer = 0;
    for(int i = 0; string[i] != NULL; i++) {
        if(string[i]=='A') string[i] = 'B';
        else string[i] = 'A';
    }
    if(strstr(string, pat)) answer = 1;
    else answer = 0;
    
    return answer;
}