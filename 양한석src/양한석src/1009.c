#include <stdio.h>
int main() {
	int n, rev, one, sum;
	for (;;) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		rev = 0; sum = 0;
		for (; n != 0;) {
			one = n % 10;
			rev = rev * 10 + one;
			n /= 10;
		}
		n = rev;
		for (; n != 0;) {
			one = n % 10;
			sum += one;
			n /= 10;
		}
		printf("%d %d\n", rev, sum);
	}
}