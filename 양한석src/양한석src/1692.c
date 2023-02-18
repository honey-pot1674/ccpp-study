#include <stdio.h>
int main() {
	int m, o, n, t, h;
	scanf("%d %d", &m, &n);
	o = n % 10;
	t = (n % 100 - o)/10;
	h = (n - t - o)/100;
	printf("%d\n%d\n%d\n%d", m * o, m * t, m * h, m * n);
}