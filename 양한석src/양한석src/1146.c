#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y) tmp=x;x=y;y=tmp
int main() {
	int n,small,tmp;
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf(" %d", &arr[i]);
	}
	for (int i = 0; i < n-1; i++) {
		small = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[small] > arr[j]) {
				small = j;
			}
		}
		SWAP(arr[i], arr[small]);
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
}