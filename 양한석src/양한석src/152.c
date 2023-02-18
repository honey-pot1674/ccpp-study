#include <stdio.h>
int main() {
	int n, odd = 0, even = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		odd += n;
		scanf("%d", &n);
		even += n;
	}
	printf("odd : %d\neven : %d", odd, even);
}