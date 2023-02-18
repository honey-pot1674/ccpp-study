#include <stdio.h>
int main() {
	int n, m;
	int tc;
	int arr[101];
	for (int i = 1; i <= 100; i++) {
		arr[i] = 101-i;
	}
	for (int i = 2; i <= 100; i++) {
		arr[i] += arr[i - 1];
	}
	scanf("%d", &tc);
	for (int i = 0; i < tc; i++) {
		scanf(" %d %d", &n, &m);
		printf("%d\n", arr[m] - arr[n-1]);
	}
}