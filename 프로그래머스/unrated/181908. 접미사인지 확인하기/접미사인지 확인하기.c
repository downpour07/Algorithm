#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int answer = 0;
    int check;
    if(strlen(my_string) >= strlen(is_suffix)) {
        for(int i = 0; i < strlen(my_string); ++i) {
            for(int j = 0; j < strlen(is_suffix); ++j) {
                if(my_string[i + j] == is_suffix[j] && strlen(my_string) - i == strlen(is_suffix)) {
                    check = 1;
                    continue;
                }
                else {
                    check = 0;
                    break;
                }
            }
            if(check == 1) answer =  1;
        }
    }
    return answer;
}