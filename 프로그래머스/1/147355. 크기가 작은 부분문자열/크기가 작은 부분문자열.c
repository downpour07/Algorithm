#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int answer = 0;
    int len = strlen(p);
    long long int data[10000] = { 0, };
    long long int qwer = 0;
    
    for(int x = 0; x<len; x++) {
        qwer *= 10;
        qwer += p[x] - '0';
    }
    
    for(int i = 0; i<strlen(t)-len+1; i++) {
        for(int j = i; j<i+len; j++) {
            data[i] *= 10;
            data[i] += t[j] - '0';
        }
        if(data[i] <= qwer)
            answer++;
    }
    return answer;
}