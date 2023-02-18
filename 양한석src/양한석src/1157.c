#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y) tmp=x;x=y;y=tmp
int main() {
	int n, small, tmp;
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf(" %d", &arr[i]);
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (arr[j] < arr[j - 1]) {
				SWAP(arr[j], arr[j - 1]);
			}
		}
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
}