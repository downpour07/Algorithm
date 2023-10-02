#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x >= 90)
    {
        printf("A");
    }
    else
    {
        if (x >= 70)
        {
            printf("B");
        }
        else
        {
            if (x >= 40)
            {
                printf("C");
            }
            else
            {
                printf("D");
            }
        }
    }
    return 0;
}