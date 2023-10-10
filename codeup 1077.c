#include <stdio.h>

int main()
{
    int a, b = 0;
    scanf("%d", &a);
    while (b <= a)
    {
        printf("%d\n", b++);
    }
    return 0;
}