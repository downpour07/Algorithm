#include <stdio.h>

int main()
{
    int w, h, b;
    scanf("%d %d %d", &w, &h, &b);
    double result;
    result = ((double)w * (double)h * (double)b) / 8388608;
    printf("%0.2lf MB", result);
}