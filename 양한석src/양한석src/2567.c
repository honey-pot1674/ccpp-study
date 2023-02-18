#include <stdio.h>
#include <stdlib.h>

int n, p, cnt = 0;
int* rc;
void rotation(int x) {
	int sto;
	sto = x * n;
	sto %= p;
	for (int i = 0; i < p; i++) {
		if (rc[i] == sto) {
			printf("%d", cnt - i);
			return;
		}
	}
	rc[cnt++] = sto;
	rotation(sto);
	return;
}
int main() {
	scanf("%d %d", &n, &p);
	rc = malloc(sizeof(int) * p);
	for (int i = 0; i < p; i++) {
		rc[i] = -1;
	}
	rotation(n);
}