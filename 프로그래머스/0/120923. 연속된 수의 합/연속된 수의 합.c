#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(num*sizeof(int));
    int cnt = num, i = 0;
    
    if(num % 2 == 0) {
        i = total/num - num/2 + 1;   
    }
    else {
        i = total/num - num/2;   
    }
    
    while(cnt--) {
        answer[num-cnt-1] = i;
        printf("%d ", i++);
    }
    
    return answer;
}