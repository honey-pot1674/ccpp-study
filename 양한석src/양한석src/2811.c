#include <stdio.h>
#include <math.h>
int main() {
	int n[5],i;
	for (i = 0; i < 5; i++) {
		scanf(" %d", &n[i]);
	}
	for (i = 0; i < 5; i++) {
		if (n[i] == 1) {
			printf("number one\n");
		}
		else {
			for (int j = 2; j <= sqrt(n[i]); j++) {
				if (n[i] % j == 0) {
					printf("composite number\n");
					n[i] = 4;
					break;
				}
			}
			if (n[i] != 4) {
				printf("prime number\n");
			}
		}
	}
}