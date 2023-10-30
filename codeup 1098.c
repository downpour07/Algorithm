#include <stdio.h>

int main()
{
	int arr[101][101] = { 0 };
	int h, w, n, l, d, x, y, i, j;
	scanf("%d %d", &h, &w);
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d %d %d %d", &l, &d, &x, &y);
		if (l == 1)
		{
			if (arr[x][y] == 0)
			{
				arr[x][y] = 1;
			}
		}
		if (l != 1)
		{
			if (d == 0)
			{
				for (j = 1; j <= l; j++)
				{
					arr[x][y + j - 1] = 1;
				}
			}
			else if (d == 1)
			{
				for (j = 1; j <= l; j++)
				{
					arr[x + j - 1][y] = 1;
				}
			}
		}
	}
	for (i = 1; i <= h; i++)
	{
		for (j = 1; j <= w; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}