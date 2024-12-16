#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// intStrs_len은 배열 intStrs의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* intStrs[], size_t intStrs_len, int k, int s, int l) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(intStrs_len*sizeof(int));
    int a = 0;
    
    for(int i = 0; i<intStrs_len; i++) {
        int data = 0;
        for(int j = s; j<s+l; j++) {
            data *= 10;
            data += intStrs[i][j] - '0';
        }
        
        if(data > k) {
            answer[a++] = data;
        }
    }
    
    return answer;
}