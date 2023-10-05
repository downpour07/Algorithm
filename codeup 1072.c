
int main()
{
    int a, b;
    scanf("%d", &a);
repeat:
    scanf("%d", &b);

    if (a-- != 0)
    {
        printf("%d\n", b);
        goto repeat;
    }

    return 0;
}