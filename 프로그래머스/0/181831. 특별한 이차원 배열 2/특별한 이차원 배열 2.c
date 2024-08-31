#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// arr_rows는 2차원 배열 arr의 행 길이, arr_cols는 2차원 배열 arr의 열 길이입니다.
int solution(int** arr, size_t arr_rows, size_t arr_cols) {
   for(int i = 0; i < arr_rows; i++){
       for(int j = 0; j < arr_cols; j++){
           if(arr[i][j] != arr[j][i]){
               return 0;
           }
       }
   }
    return 1;
}