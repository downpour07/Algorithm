#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int mode = 1;
    int idx = 1;
    
    if(array_len == 1) {
        answer = array[0];
    }
    for(int i = 0; i<array_len; i++) {
        mode = 1;
        for(int j = i+1; j < array_len; j++) {
          if(array[i] == array[j]) mode++;
          if(mode > idx) {
            idx = mode;
            answer = array[i]; 
          }
          else if(mode == idx && answer != array[i]) 
            answer = -1;
      }
    }
    
    return answer;
}