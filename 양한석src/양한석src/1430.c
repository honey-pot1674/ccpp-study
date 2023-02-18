#include <stdio.h>
int main() {
	int a, b, c, gop;
	int num[10] = { 0 };
	scanf("%d %d %d", &a, &b, &c);
	gop = a * b * c;
	for (; gop > 0;) {
		num[gop % 10] += 1;
		gop /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", num[i]);
	}
}