#include <stdio.h>

int main()
{
    int n, i;
    int min = 24;
    int a[10000] = { 0 };
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = n; i >= 1; i--) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("%d ", min);
    return 0;
}