#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(4*sizeof(char));
    
    char m[7][4] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    int cnt = 0;
    for(int i = 1; i < a; i++) {
        if(i == 2) cnt += 29;
        else if(i <= 7) {
            if(i % 2 == 0) cnt += 30;
            else cnt += 31;
        } else {
            if(i % 2 == 0) cnt += 31;
            else cnt += 30;
        }
    }
    cnt += b-1;
    
    printf("%s\n", m[cnt % 7]);
    strcpy(answer, m[cnt%7]);
    
    return answer;
}