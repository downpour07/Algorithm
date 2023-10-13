#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    scanf("%d", &a);
    for (b = 1;; b++)
    {
        sum += b;
        if (sum >= a)
        {
            break;
        }
    }
    printf("%d", b);
    return 0;
}