#include <stdio.h>
#include <stdlib.h>
int main() {
	int m, n, sum = 0, awesum=0, i;
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for (i = 0; i < n; i++) {
		if (m % arr[i] == 0) {
			sum += arr[i];
		}
	}
	for (i = 0; i < n; i++) {
		if (arr[i] % m == 0) {
			awesum += arr[i];
		}
	}
	printf("%d\n%d", sum, awesum);
}