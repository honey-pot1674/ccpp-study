#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, small, tmp;
	int key;
	int push = 0;
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf(" %d", &arr[i]);
	}
	for (int i = 1; i < n; i++) {
		key = arr[i];
		small = 0;
		for (int j = i-1 ; j >= 0; j--) {
			if (arr[j] > key) {
				arr[j + 1] = arr[j];
				push++;
			}
			else { 
				small = j + 1;
				break;
			}
		}
		arr[small] = key;
	}
	printf("%d", push);
}