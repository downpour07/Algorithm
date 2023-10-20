#include <stdio.h>

int main()
{
    int a, sum = 0;
    scanf("%d", &a);

    for (int i = 1;; i++)
    {
        sum += i;
        if (sum >= a)
        {
            break;
        }
    }
    printf("%d", sum);
}