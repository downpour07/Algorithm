#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(int n, const char* control) {
    int answer = n;
    for(int i = 0; control[i] != NULL; i++) {
        char ch = control[i];
        if(ch == 'w') answer++;
        else if(ch == 's') answer--;
        else if(ch == 'd') answer+=10;
        else if(ch == 'a') answer-=10;
    }
    return answer;
}