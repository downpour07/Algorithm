#include <stdio.h>

int main()
{
    char x, ch = 'a';
    scanf("%c", &x);

    do
    {
        printf("%c ", ch);
        ch += 1;
    }

    while (ch <= x);

    return 0;
}
