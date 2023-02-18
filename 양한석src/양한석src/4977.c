#include <stdio.h>
int main() {
	double n;
	int itg, cnt = 0;;
	int bin[7] = { 0 };
	int binr[4] = { 0 };
	scanf("%lf", &n);
	itg = (int)n;
	n -= itg;
	for (int i=0; itg != 0; i++) {
		bin[i] = itg % 2;
		itg /= 2;
		cnt++;
	}
	for (int i = 0; i < 4; i++) {
		binr[i] = (int)(n * 2);
		n *= 2;
		n -= binr[i];
	}
	for (int i = cnt - 1; i >= 0; i--) printf("%d", bin[i]);
	printf(".");
	for (int i = 0; i < 4; i++) printf("%d", binr[i]);
}