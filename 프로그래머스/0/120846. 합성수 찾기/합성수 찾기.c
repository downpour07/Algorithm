#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0, state = 1, cnt = 0;;
    
    for(int i = 4; i<=n; i++) {
        state = 1;
        cnt = 0;
        
        for(int j = i; j>0; j--) {
            if(i%j == 0) {
                cnt++;
            }
            if(cnt > 2) {
                state = 0;
            }
        }
        
        printf("\n");
        
        if(state == 0) {
            answer++;
        }
    }
    
    return answer;
}