#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(100000 * sizeof(char*));
    char arr[100001];
    for(int i = 1; i < numLog_len; i++) {
        if(numLog[i-1]+1 == numLog[i]) arr[i-1] = 'w';
        else if(numLog[i-1]-1 == numLog[i]) arr[i-1] = 's';
        else if(numLog[i-1]+10 == numLog[i]) arr[i-1] = 'd';
        else if(numLog[i-1]-10 == numLog[i]) arr[i-1] = 'a';
    }
    strcpy(answer, arr);
    return answer;
}