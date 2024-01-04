#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    for(int i=0; i < num_list_len; i++){
		int least = i;
		for(int j=i+1; j<num_list_len; j++){
			if(num_list[least] > num_list[j])
				least = j;
		}
		int tmp = num_list[i];
		num_list[i] = num_list[least];
		num_list[least] = tmp;
	}
    
    int data[5];
    for(int i = 0; i<5; i++)
        data[i] = num_list[i];
    
    int* answer = (int*)malloc(30*sizeof(int*));
    memcpy(answer, data, sizeof(data));
    return answer;
}