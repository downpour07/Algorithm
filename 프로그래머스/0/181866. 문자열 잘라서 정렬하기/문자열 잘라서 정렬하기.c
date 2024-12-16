#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int compare(const void* a, const void* b) {
    const char* str1 = *(const char**)a;
    const char* str2 = *(const char**)b;
    return strcmp(str1, str2);
}

char** solution(const char* myString) {
    int len = strlen(myString);

    char** answer = (char**)malloc(len * sizeof(char*));
    for (int i = 0; i < len; i++) {
        answer[i] = (char*)malloc((len + 1) * sizeof(char));
    }
    
    int a = 0, b = 0;
    for (int i = 0; i < len; i++) {
        if (myString[i] != 'x') {
            answer[a][b++] = myString[i];
        } else if (myString[i] == 'x') {
            if (b > 0) {
                answer[a][b] = '\0';
                a++;
                b = 0;
            }
        }
    }
    if (b > 0) {
        answer[a][b] = '\0';
        a++;
    }
    
    answer = (char**)realloc(answer, a * sizeof(char*));
    qsort(answer, a, sizeof(char*), compare);
    
    return answer;
}