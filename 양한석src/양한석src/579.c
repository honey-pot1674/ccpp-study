#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y) tmp=x;x=y;y=tmp;
int tmp;
int work(int m,int arr[]) {
	int big;
	for (int i = 0; i < m; i++) {
		big = i;
		for (int j = i + 1; j < m; j++) {
			if (arr[big] < arr[j]) {
				big = j;
			}
		}
		SWAP(arr[i], arr[big]);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n;i++) {
		scanf("%d", &arr[i]);
	}
	work(n, arr);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}