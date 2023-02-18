#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y) tmp=x;x=y;y=tmp;



void input(int n, int arr[]) {
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
}
void swap(int n,int arr[]) {
	int big, tmp;
	for (int i = 0; i < n; i++) {
		big = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[big] < arr[j]) {
				big = j;
			}
		}
		SWAP(arr[big], arr[i]);
	}
}
void output(int n,int arr[]) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
int main() {
	int n;
	int* p;
	p = &n;
	scanf("%d", p);
	int* arr = malloc(sizeof(int) * *p);
	input(*p, arr);
	swap(*p, arr);
	output(*p, arr);
}