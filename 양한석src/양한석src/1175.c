#include <stdio.h>
int num = 0;
int arr[6] = { 0 };
int n;
void dice(int depth,int sum) {
	if (depth > n) {
		if (sum == 0) {
			for (int i = 1; i <= n; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n");
		}		
		return;
	}

	for (int i = 1; i <= 6; i++) {
		arr[depth] = i;
		dice(depth + 1,sum-i);
	}
}
int main() {
	int m;
	scanf("%d %d", &n, &m);
	dice(1, m);
}