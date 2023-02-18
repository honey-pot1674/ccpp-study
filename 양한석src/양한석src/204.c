#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, max, min;
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	max = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[max]) {
			max = i;
		}
	}
	min = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] < arr[min]) {
			min = i;
		}
	}
	printf("max : %d\nmin : %d", arr[max], arr[min]);
}