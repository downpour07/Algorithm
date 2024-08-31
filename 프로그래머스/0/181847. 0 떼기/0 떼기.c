#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* n_str) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(10*sizeof(char));
    int flag = 1, i = 0, a = 0;
    
    while(1) {
        if(n_str[i] == '\0') break;
        
        if(flag && n_str[i] == '0') {}
        else {
            flag = 0;
            answer[a++] = n_str[i];
        }
        
        i++;
    }
    answer[a] = '\0';
    
    return answer;
}