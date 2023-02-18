#include <stdio.h>
int main() {
	for (int i = 2; i <= 6; i++){
		for (int j = i; j <= i+4; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}