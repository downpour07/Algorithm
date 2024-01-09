#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;
    int sl_mS = strlen(myString);
    int sl_p  =strlen(pat);

    char* mS_a = (char*)malloc(sizeof(char)*sl_mS+1);
    for(int i=0; i<sl_mS; i++) {
        if(myString[i]<92) {
            mS_a[i]=myString[i]+32;
        }
        else {
            mS_a[i]=myString[i]; 
        }
    }
    mS_a[sl_mS]='\0';
    char* p_a = (char*)malloc(sizeof(char)*sl_p+1);
    for(int i=0; i<sl_p; i++) {
        if(pat[i]<92) {
            p_a[i]=pat[i]+32;
        }
        else {
            p_a[i]=pat[i];   
        }
    }
    p_a[sl_p]='\0';
    if(sl_mS<sl_p)
        answer=0;
    else{
        if(strstr(mS_a,p_a)!=NULL)
            answer=1;
        else
            answer=0;
    }

    return answer;
}