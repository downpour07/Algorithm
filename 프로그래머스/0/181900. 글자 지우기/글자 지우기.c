#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// indices_len은 배열 indices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int indices[], size_t indices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(my_string) * sizeof(char));
    int a = 0, state = 1;
    
    for(int i = 0; i<strlen(my_string); i++) {
        for(int j = 0; j<indices_len; j++) {
            if(i == indices[j]) {
                state = 0;
                break;
            }
        }
        
        if(state) answer[a++] = my_string[i];
        
        state = 1;
    }
    answer[a] = '\0';
    
    return answer;
}