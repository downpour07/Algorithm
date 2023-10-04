#include <stdio.h>

int main()
{
    int x;
repeat:
    scanf("%d", &x);

    if (x != 0)
    {
        printf("%d\n", x);
        goto repeat;
    }

    return 0;
}