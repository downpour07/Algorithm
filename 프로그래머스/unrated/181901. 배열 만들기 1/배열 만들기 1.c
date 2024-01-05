#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int arr[1000001];
    int a = 0;
    for(int i = k; i<=n; i+=k) {
        arr[a++] = i;
    }
    int* answer = (int*)malloc(1000001*sizeof(int*));
    memcpy(answer, arr, sizeof(arr));
    return answer;
}