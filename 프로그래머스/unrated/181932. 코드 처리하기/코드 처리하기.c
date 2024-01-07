#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int mode = 0;
    int a = 0;
    int len = strlen(code);
    char empty[6] = "EMPTY";
    char ret[100001];
    char* answer = (char*)malloc(100000 * sizeof(char*));
    for(int idx = 0; idx < len; idx++) {
        if(code[idx] == '1') mode = !mode;
        else {
            if(mode && (idx%2)) ret[a++] = code[idx];
            else if(!mode && !(idx%2)) ret[a++] = code[idx];
        }
    }
    if(ret[0] == '\0') strcpy(answer, empty);
    else strcpy(answer, ret);
    return answer;
}