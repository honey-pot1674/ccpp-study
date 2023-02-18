#include <stdio.h>
#include <math.h>
int main() {
	int dec, jinsu, cnt = 0;;
	char op[31],oprev[31];
	for (int i = 0; i < 31; i++) {
		op[i] = 32;
		oprev[i] = 32;
	}
	scanf("%d %d", &dec, &jinsu);
	for (int i = 0; dec != 0; i++) {
		op[i] = (dec % jinsu) + 48;
		if (op[i] > 57) {
			op[i] += 7;
		}
		dec /= jinsu;
	}
	cnt = 0;
	for (int i = 30; i >= 0; i--) {
		if (op[i] != 32) {
			oprev[cnt] = op[i];
			cnt++;
		}
	}
	for (int i = 0; i < 31; i++) {
		if (oprev[i] != 32) {
			printf("%c", oprev[i]);
		}
	}
}