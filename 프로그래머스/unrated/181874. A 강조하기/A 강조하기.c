#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(20 * sizeof(char*));
    strcpy(answer, myString);
    for(int i = 0; i<20; i++) {
        if(answer[i] == 'A') {
            answer[i] = answer[i];
        }
        else if(answer[i] == 'a') {
            answer[i] = answer[i] - 32;
        }
        else if(answer[i] >= 65 && answer[i] <= 90) {
            answer[i] = answer[i] + 32;
        }
    }
    
    return answer;
}