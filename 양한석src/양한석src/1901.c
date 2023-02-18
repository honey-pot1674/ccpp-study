#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int prime(int x) {
	int prm = 0;
	for (int i = 2; i <= sqrt(x); i++) {
		if ((x) % i == 0) {
			prm = 1;
			break;
		}
	}
	if (prm == 1) {
		return 1;
	}
	else {
		return 0;
	}
}


int main() {
	int n, i, l = 0, sml = 0, backup;

	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	
	for (i = 0; i < n; i++) {
		scanf(" %d", &arr[i]);
	}
	
	for (i = 0; i < n; i++) {
		sml = 0;
		l = 0;
		for (;l == 0;) {		
			if (prime(arr[i] - sml) == 0) {
				printf("%d ", arr[i] - sml);
				++l;
			}
			if (sml != 0) {
				if (prime(arr[i] + sml) == 0) {
					printf("%d", arr[i] + sml);
					++l;
				}
			}
			++sml;
		}
		printf("\n");
	}
}