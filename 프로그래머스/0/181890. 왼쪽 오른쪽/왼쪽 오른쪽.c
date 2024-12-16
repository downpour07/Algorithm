#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// str_list_len은 배열 str_list의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* str_list[], size_t str_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int state = 0; //1이면 left, 2면 right
    int index = 0;
    
    char** answer = (char**)malloc(str_list_len * sizeof(char*));
    for(int i = 0; i<str_list_len; i++) {
        answer[i] = (char*)malloc(2*sizeof(char));
    }
    
    for(int i = 0; i<str_list_len; i++) {
        if(!strcmp(str_list[i], "l")) {
            printf("left: %s", str_list[i]);
            state = 1;
            index = i;
            break;
        }
        else if(!strcmp(str_list[i], "r")) {
            printf("right: %s", str_list[i]);
            state = 2;
            index = i;
            break;
        }
    }
    
    if(state == 1) {
        for(int i = 0; i<index; i++) {
            strcpy(answer[i], str_list[i]);
        }
    } else if(state == 2) {
        for(int i = index+1; i<str_list_len; i++) {
            strcpy(answer[i-index-1], str_list[i]);
        }
    }
    
    return answer;
}