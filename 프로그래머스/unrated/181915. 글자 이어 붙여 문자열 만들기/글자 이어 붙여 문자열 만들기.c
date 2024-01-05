#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// index_list_len은 배열 index_list의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int index_list[], size_t index_list_len) {
    char* answer = (char*)malloc(1000*sizeof(char*));
    for(int i = 0; i<index_list_len; i++) {
        answer[i] = my_string[index_list[i]];
    }
    return answer;
}