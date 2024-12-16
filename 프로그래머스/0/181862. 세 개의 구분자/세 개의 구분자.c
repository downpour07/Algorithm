#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* myStr) {
int length = strlen(myStr);
    char** answer = (char**)malloc(length * sizeof(char*));
    int a = 0, start = -1;
    for (int i = 0; i <= length; i++) { 
        if (i == length || myStr[i] == 'a' || myStr[i] == 'b' || myStr[i] == 'c') {
            if (start != -1) {
                int wordLength = i - start;
                answer[a] = (char*)malloc((wordLength + 1) * sizeof(char));
                strncpy(answer[a], &myStr[start], wordLength);
                answer[a][wordLength] = '\0';
                a++;
                start = -1;
            }
        } else if (start == -1) { 
            start = i;
        }
    }
    
    if (a == 0) {
        answer[a] = (char*)malloc(6 * sizeof(char));
        strcpy(answer[a], "EMPTY");
        a = 1;
    }

    return answer;
}