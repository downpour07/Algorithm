#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* binomial) {
    int answer = 0;
    int x = 0, y = 0;
    char op;
    
    sscanf(binomial, "%d %c %d", &x, &op, &y);
    
    if(op == '+') answer = x+y;
    else if(op == '-') answer = x-y;
    else if(op == '*') answer = x*y;
    
    return answer;
}