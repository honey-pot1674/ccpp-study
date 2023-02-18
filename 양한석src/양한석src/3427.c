#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, count = 0;
	int t[4] = { 0 };
	int small = 500000;
	char st;
	scanf("%d", &n);
	char* arr = malloc(sizeof(char) * n);
	for (int i = 0; i < n; i++) {
		scanf(" %c", &arr[i]);
	}
	for (int i = 0; i < 4; i++) {
		count = 0;
		if (i % 2 == 0) {
			st = 'R';
		}
		else {
			st = 'B';
		}
		if (i < 2) {
			for (int j = 0; j < n; j++) {
				if (arr[j] == st) {
					count++;
				}
				else {
					t[i] += count;
					count = 0;
				}
			}
		}	
		else {
			for (int j = n - 1; j >= 0; j--) {
				if (arr[j] == st) {
					count++;
				}
				else {
					t[i] += count;
					count = 0;
				}
			}
		}
		if (small > t[i]) {
			small = t[i];
		}
	}
	printf("%d", small);
}