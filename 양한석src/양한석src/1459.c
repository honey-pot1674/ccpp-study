#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool* D;
int* arr;
int cnt=0,n;
void rotate(int start, int key) {
	if (cnt > n) {
		return;
	}
	if (start == key) {
		D[start] = true;
		return;
	}
	else {
		cnt++;		
		rotate(start, arr[key]);
	}
}
int main() {
	int i, count=0;
	scanf("%d", &n);

	arr = malloc(sizeof(int) * (n + 1));
	D = malloc(sizeof(bool) * (n + 1));

	for (i = 1; i < n + 1; i++) {
		scanf(" %d", &arr[i]);
		D[i] = false;
	}
	for (i = 1; i < n + 1; i++) {
		cnt = 0;
		rotate(i, arr[i]);
	}
	for (i = 1; i < n + 1; i++) {
		if (D[i]) {
			count += 1;
		}
	}
	printf("%d", count);

	for (i = 1; i < n + 1; i++) {
		if (D[i]) {
			printf("\n%d", i);
		}
	}
}