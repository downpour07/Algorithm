#include <stdio.h>

int main()
{
    long long int num1, num2, num3;
    scanf("%lld %lld %lld", &num1, &num2, &num3);
    printf("%lld\n", num1 + num2 + num3);
    printf("%.01f", (float)(num1 + num2 + num3) / 3);
    return 0;
}