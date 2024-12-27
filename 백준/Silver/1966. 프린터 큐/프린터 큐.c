#include <stdio.h>
#include <stdlib.h>
 
int pr[10];
 
int main() {
	int t;
	scanf("%d", &t);
    
	while(t) {
		int n, find, max = 0;
		scanf("%d %d", &n, &find);
        
		int* que = (int*)calloc(n, sizeof(int));
 
		int cursor = -1;
        int count = 0;
        
		for (int i = 0; i < n; i++) {
			scanf("%d", &que[i]);
			pr[que[i]]++;
			
            if (que[i] > max) {
				max = que[i];
            }
		}
 
		while (que[find] != -1) {
			cursor++;
			cursor %= n;

			if (que[cursor] == max) {
				count++;
				que[cursor] = -1;
				pr[max]--;

				if (pr[max] == 0) {
					max--;
					while (!pr[max]) max--;
				}
			}
		}
        
		printf("%d\n", count);
		free(que);
        
		memset(pr, 0, sizeof(int) * 10);
		t--;
	}
	return 0;
}