#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int answer = 0;
    int X_MAX = INT_MIN, X_MIN = INT_MAX;
    int Y_MAX = INT_MIN, Y_MIN = INT_MAX;
    
    for(int i = 0; i<4; i++) {
        if(dots[i][0] >= X_MAX) {
            X_MAX = dots[i][0];
        }
        if(dots[i][0] <= X_MIN) {
            X_MIN = dots[i][0];
        }
        
        if(dots[i][1] >= Y_MAX) {
            Y_MAX = dots[i][1];
        }
        if(dots[i][1] <= Y_MIN) {
            Y_MIN = dots[i][1];
        }
    }
    
    answer = (X_MAX - X_MIN) * (Y_MAX - Y_MIN);
    
    return answer;
}