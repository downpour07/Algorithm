#include <stdio.h>
#include <stdlib.h>

// arr_rows는 2차원 배열 arr의 행 길이, arr_cols는 2차원 배열 arr의 열 길이입니다.
int** solution(int** arr, size_t arr_rows, size_t arr_cols) {
    
    int size = (arr_rows > arr_cols) ? arr_rows : arr_cols;
    int** answer = (int**)malloc(size * sizeof(int*));
    for (int i = 0; i < size; i++) {
        answer[i] = (int*)calloc(size, sizeof(int));
    }

    for (int i = 0; i < arr_rows; i++) {
        for (int j = 0; j < arr_cols; j++) {
            answer[i][j] = arr[i][j];
        }
    }

    return answer;
}
