#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int* s;
int store[7] = { 0 };
int k;
bool* D;
void lotto(int depth) {
	if (depth > 6) {
		for (int i = 2; i <= 6; i++) {
			if (store[i] < store[i - 1]) {
				return;
			}
		}
		for (int i = 1; i <= 6; i++) {
			printf("%d ", store[i]);
		}
		printf("\n");
		return;
	}
	for (int i = depth; i <= k; i++) {
		if (D[i]) {
			D[i] = false;
			store[depth] = s[i];			
			lotto(depth + 1);
			D[i] = true;
		}
	}
	return;
}
int main() {
	scanf("%d", &k);
	s = malloc(sizeof(int) * (k + 1));
	D = malloc(sizeof(bool) * (k + 1));
	for (int i = 1; i <= k; i++) {
		scanf(" %d", &s[i]);
		D[i] = true;
	}
	lotto(1);
}