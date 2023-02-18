#include <stdio.h>
#include <stdlib.h>
int gcd(int x, int y) {
	int m, n;
	m = x; n = y;
	for (; m % n != 0 && n % m != 0;) {
		if (m > n) {
			m %= n;
		}
		else {
			n %= m;
		}
	}
	if (m < n) {
		return m;
	}
	else {
		return n;
	}
}

int main() {
	int n;
	int g, l;
	scanf("%d", &n);
	int* arr = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf(" %d", &arr[i]);
	}
	g = l = arr[0];
	for (int i = 1; i < n; i++) {
		g = gcd(g, arr[i]);
		l = l / gcd(l, arr[i]) * arr[i];
	}
	printf("%d %d", g, l);
}