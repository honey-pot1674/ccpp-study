#include <stdio.h>
long long factorial(int x) {
	if (x > 1) {
		printf("%d! = %d * %d!\n", x, x, x - 1);
		return x * factorial(x - 1);
	}
	else {
		printf("1! = 1\n");
		return 1;
	}
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", factorial(n));
}