#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int chicken) {
    int result = 0;
    int temp = chicken % 10;
    int answer = chicken / 10;
    result += answer;
    answer += temp;

    while(1) {
        temp = answer % 10;
        answer = answer / 10;
        result += answer;
        if (answer == 0) {
            break;
        }
        answer += temp;
    }
    
    return result;
}