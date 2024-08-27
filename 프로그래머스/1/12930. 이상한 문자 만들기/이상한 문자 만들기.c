#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(s)+1);
    
    strcpy(answer, s);
    int cnt = 0;
    
    for(int i = 0; i<strlen(answer); i++) {
        if(answer[i] == ' ') {
            cnt = 0;
            continue;
        }
        
        if(cnt % 2 == 0 && islower(answer[i]))
            answer[i] -= ('a' - 'A');
        
        else if(cnt % 2 == 1 && isupper(answer[i]))
            answer[i] += ('a' - 'A');
        
        cnt++;
    }
    
    return answer;
}