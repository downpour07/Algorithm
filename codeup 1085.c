#include <stdio.h>

int main()
{
    int h, b, c, s;
    double memory;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    memory = ((double)h * (double)b * (double)c * (double)s) / 8388608;
    printf("%0.1lf MB", memory);
}