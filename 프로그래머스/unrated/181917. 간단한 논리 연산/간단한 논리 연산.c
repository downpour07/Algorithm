#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    bool a = true;
    bool b = true;
    bool c = true;
    a = x1 || x2;
    b = x3 || x4;
    c = a && b;
    answer = c;
    return answer;
}