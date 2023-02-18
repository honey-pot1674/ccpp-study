#include <stdio.h>
void hanoi(int N, int start, int to, int via) {
	if (N == 1) {
		printf("1 : %d -> %d\n", start, to);
	}
	else {
		hanoi(N - 1, start, via, to);
		printf("%d : %d -> %d\n", N, start, to);
		hanoi(N - 1, via, to, start);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	hanoi(n, 1, 3, 2);
}