#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    for(int tmp = 1, a = 0, b = 1; ; b = (a+b)%1234567, a = tmp, tmp = b)
        if(!--n)
            return b;
}