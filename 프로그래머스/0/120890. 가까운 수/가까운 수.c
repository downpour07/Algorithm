#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = array[0];
    int diff = ((array[0] > n) ? (array[0] - n) : (n - array[0]));
    
    for(int i = 1; i<array_len; i++) {
        if(array[i] > n) {
            int res = array[i] - n;
            if(diff > res) {
                diff = res;
                answer = array[i];
            }
            else if(diff == res) {
                answer = array[i]>answer ? answer : array[i];
            }
        }
        else {
            int res = n - array[i];
            if(diff > res) {
                diff = res;
                answer = array[i];
            }
            else if(diff == res) {
                answer = array[i]>answer ? answer : array[i];
            }
        }
    }
    
    return answer;
}