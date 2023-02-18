#include <stdio.h>
int main() {
	int m, n, time;
	int gcd, lcm;
	scanf("%d %d", &m, &n);
	time = m * n;
	for (; m % n != 0 && n % m != 0;) {
		if (m > n) {
			m %= n;
		}
		else {
			n %= m;
		}
	}
	if (m < n) {
		gcd = m;
	}
	else {
		gcd = n;
	}
	lcm = time / gcd;
	printf("%d\n%d", gcd, lcm);
}