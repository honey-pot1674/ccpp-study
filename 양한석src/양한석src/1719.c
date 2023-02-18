#include <stdio.h>
int main() {
	int n, m, x = 0,nu=-1;
	scanf("%d %d", &n, &m);
	if (n > 100 || m < 1 || m>4 || n % 2 == 0) {
		printf("INPUT ERROR!");
	}
	else {
		if (m == 1) {
			for (int i = 1; i <= n; i++) {
				if (i <= (n + 1) / 2) {
					x++;
				}
				else {
					x--;
				}
				for (int j = 0; j < x; j++) {
					printf("*");
				}
				printf("\n");
			}
		}
		else if (m == 2) {
			for (int i = 1; i <= n; i++) {
				if (i <= (n + 1) / 2) {
					x++;
				}
				else {
					x--;
				}
				for (int j = 0; j < (n + 1) / 2 - x;j++) {
					printf(" ");
				}
				for (int j = 0; j < x; j++) {
					printf("*");
				}
				printf("\n");
			}
		}
		else if (m == 3) {
			x = -1;
			for (int i = 1; i <= n; i++) {
				if (i <= (n + 1) / 2) {
					x++;
				}
				else {
					x--;
				}
				for (int j = 0; j < x; j++) {
					printf(" ");
				}
				for (int j = 0; j < n-2*x; j++) {
					printf("*");
				}
				printf("\n");
			}
		}
		else if (m == 4) {
			x = -1;
			for (int i = 1; i <= n; i++) {
				if (i <= (n + 1) / 2) {
					x++;
					nu++;
				}
				else {
					x--;
				}
				for (int j = 0; j < nu; j++) {
					printf(" ");
				}
				for (int j = 0; j < (n+1)/2 - x; j++) {
					printf("*");
				}
				printf("\n");
			}
		}
	}
}