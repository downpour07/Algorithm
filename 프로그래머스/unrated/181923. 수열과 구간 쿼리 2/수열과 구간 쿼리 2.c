#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int result[1000];
    
    for(int a = 0; a < queries_rows; a++) {
        int s = queries[a][0];
        int e = queries[a][1];
        int k = queries[a][2];
        
        int min = 1000001;
        
        for(int i = s; i<=e; i++) {
            if(arr[i] > k) {
                if(min > arr[i]) min = arr[i];
            }
        }
        
        if(min == 1000001) min = -1;
        
        result[a] = min;
    }
    
    int* answer = (int*)malloc(1000*sizeof(int*));
    memcpy(answer, result, sizeof(result));
    return answer;
}