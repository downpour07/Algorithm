#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    int sum = 0;
    for (int a = 1; a <= num; a++)
    {
        if (a % 2 == 0)
        {
            sum = sum + a;
        }
    }
    printf("%d", sum);
    return 0;
}