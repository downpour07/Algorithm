#include <stdio.h>
 
int n, m;
int arr[7];
void nm(int count);
 
int main() {
	scanf("%d %d", &n, &m);
	nm(0);
	return 0;
}
 
void nm(int count) {
	if (count == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", arr[i]);
        }
		printf("\n");
	}
	else {
		for (int i = 1; i <= n; i++) {
			arr[count] = i;
			nm(count + 1);
		}
	}
}
