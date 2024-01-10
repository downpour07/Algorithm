#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(100*sizeof(int*));
    
    int arr[num_list_len];
    
    for(int a = 0; a<num_list_len; a++) {
        arr[a] = num_list[a];
    }
    
    for(int i = 0; i<num_list_len; i++) {
        for(int j = i+1; j<num_list_len; j++) {
            if(arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    for(int i = 0; i<5; i++) {
        for(int j = 0; j<num_list_len; j++) {
            arr[j] = arr[j+1];
        }
    }
    memcpy(answer, arr, sizeof(arr));
    return answer;
}