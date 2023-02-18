#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y) tmp=x; x=y; y=tmp;

int main() {
	int n, tmp, largest;

	scanf("%d",&n);
	int* arr = malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		largest = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[largest] < arr[j]) {
				largest = j;
			}
		}
		SWAP(arr[largest], arr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}