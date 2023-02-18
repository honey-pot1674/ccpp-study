#include <stdio.h>

int main() {
	int oe[10],n,o=0,e=0;
	int* p;
	p = &n;
	for (int i = 0; i < 10; i++) {
		scanf("%d", p);
		oe[i] = *p;
	}
	for (int i = 0; i < 10; i++) {
		if (oe[i] % 2 == 0) {
			e += 1;
		}
		else{
			o += 1;
		}
	}
	printf("odd : %d\neven : %d", o, e);
}