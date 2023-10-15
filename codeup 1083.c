#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i % 3 == 0 || i % 6 == 0 || i % 9 == 0)
        {
            printf("X ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}