#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// intervals_rows는 2차원 배열 intervals의 행 길이, intervals_cols는 2차원 배열 intervals의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** intervals, size_t intervals_rows, size_t intervals_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(100000 * sizeof(int));
    int a = 0;
    
    for(int i = 0; i<intervals_rows; i++) {
        for(int j = intervals[i][0]; j<=intervals[i][1]; j++) {
            answer[a++] = arr[j];
        }
    }
    
    return answer;
}