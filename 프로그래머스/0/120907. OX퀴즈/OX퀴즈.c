#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// quiz_len은 배열 quiz의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* quiz[], size_t quiz_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(quiz_len * sizeof(char*));
    
for (size_t i = 0; i < quiz_len; i++) {
        int x, y, z;
        char operator;
    
        sscanf(quiz[i], "%d %c %d = %d", &x, &operator, &y, &z);

        if ((operator == '+' && x + y == z) || (operator == '-' && x - y == z)) {
            answer[i] = "O";
        } else {
            answer[i] = "X";
        }
    }

    return answer;
}