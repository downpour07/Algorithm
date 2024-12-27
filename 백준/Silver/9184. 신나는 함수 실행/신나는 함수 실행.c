#include <stdio.h>
 
int dp[101][101][101];
 
int main() {
	int a, b, c;
	for (a = 0; a <= 100; a++) {
		for (b = 0; b <= 100; b++) {
			for (c = 0; c <= 100; c++) {
				if (a <= 50 || b <= 50 || c <= 50) {
					dp[a][b][c] = 1;
                }
				else if (a < b && b < c) { 
					dp[a][b][c] = dp[a][b][c-1]+dp[a][b-1][c-1]-dp[a][b-1][c];
                }
                else {
					dp[a][b][c] = dp[a-1][b][c]+dp[a-1][b-1][c]+dp[a-1][b][c-1]-dp[a-1][b-1][c-1];
                }
            }
		}
	}
    
	for (a = 51; a <= 100; a++) {
		for (b = 51; b <= 100; b++) {
			for (c = 51; c <= 100; c++) {
				if (a > 70 || b > 70 || c > 70)
					dp[a][b][c] = dp[70][70][70];
			}
		}
	}
    
	while (1) {
		scanf("%d %d %d", &a, &b, &c);
		if (a == -1 && b == -1 && c == -1)
			break;
		else
			printf("w(%d, %d, %d) = %d\n", a, b, c, dp[a+50][b+50][c+50]);
	}
    
	return 0;
}