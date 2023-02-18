#include <stdio.h>
#include <math.h>
int main() {
	int m, n, i, prsum = 0, l,lowest;
	scanf("%d %d", &m, &n);
	for (i = n; i >= m; i--) {
		l = i;
		for (int j = 2; j <= sqrt(l); j++) {
			if (l % j == 0) {
				l = 4;
				break;
			}
		}
		if (l != 4&&l!=1) {
			lowest = l;
			prsum += l;
		}
	}
	if (prsum == 0) {
		printf("-1");
	}
	else {
		printf("%d\n%d", prsum, lowest);
	}
}