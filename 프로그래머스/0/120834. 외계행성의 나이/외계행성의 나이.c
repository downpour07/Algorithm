#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char abc[27] = "abcdefghijklmnopqrstuvwsyz";
    char* answer = (char*)malloc(5*sizeof(char));
    int arr[4], i = 0, a = 0;
    
    while(1) {
        if(age == 0) break;
        arr[i++] = age % 10;
        age /= 10;
    }
    
    for(i -= 1; i>=0; i--) {
        answer[a++] = abc[arr[i]];
    }
    answer[a] = '\0';
    
    return answer;
}