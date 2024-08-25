#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    
    if(s[0] == '-' || s[0] == '+') {
        for(int i = 1; i<strlen(s); i++) {
            answer *= 10;
            answer += s[i] - '0';
        }
        
        if(s[0] == '-')
            answer *= -1;
    }
    else {
        for(int i = 0; i<strlen(s); i++) {
            answer *= 10;
            answer += s[i] - '0';
        }
    }
    
    return answer;
}