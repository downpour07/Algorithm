#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    int answer = 1;
    int alp_before[26] = { 0 };
    int alp_after[26] = { 0 };
    
    for(int i = 0; i<strlen(before); i++){
        alp_before[before[i] - 'a']++;
    }
    
    for(int i = 0; i<strlen(after); i++){
        alp_after[after[i] - 'a']++;
    }
    
    for(int i = 0; i<26; i++){
        if(alp_before[i] < alp_after[i]) answer = 0;
    }
    
    return answer;
}