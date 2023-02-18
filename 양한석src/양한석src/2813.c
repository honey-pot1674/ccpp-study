#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int sosu[2000005] = { 0 };

void eratos(int x) {
	sosu[0] = sosu[1] = 1;
	for (int i = 2; i <= sqrt(x); i++) {
		if (sosu[i] == 0) {
			for (int j = i * i; j <= x; j += i) {
				sosu[j] = 1;
			}
		}
	}
}


int main() {
	int m, n, num=0;
	scanf("%d %d", &m, &n);
	eratos(n);
	for (int i = m; i <= n; i++) {
		if (sosu[i] == 0) {
			++num;
		}
	}
	printf("%d", num);
}