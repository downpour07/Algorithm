#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }
}