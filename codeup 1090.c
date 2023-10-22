#include <stdio.h>

int main()
{
    long long int a, r, n, i;
    scanf("%lld %lld %lld", &a, &r, &n);
    for (i = 1; i < n; i++)
    {
        a = a * r;
    }
    printf("%lld", a);
}