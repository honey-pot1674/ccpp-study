#include <stdio.h>
int max(int m,int n,int o) {
	int b;
	b = m;
	if (b < n) {
		b = n;
	}
	if (b < o) {
		b = o;
	}
	return b;
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", max(a, b, c));
}