#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(100*sizeof(int));
    int a = 0;
    
    for(int i = 0; i<strlen(my_string); i++) {
        if(my_string[i] >= '0' && my_string[i] <= '9') {
            answer[a++] = my_string[i] - '0';
        }
    }
    
    for(int i = 0; i<a; i++) {
        for(int j = 0; j<a; j++) {
            if(answer[i] < answer[j]) {
                int temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }
    
    return answer;
}