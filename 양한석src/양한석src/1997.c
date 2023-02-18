#include <stdio.h>
int main() {
	int D, K;
	int a, b;
	int st=1, st2=0, ast, bst, tmp;
	scanf("%d %d", &D, &K);
	for (int i = 2; i < D; i++) {
		tmp = st2;
		st2 += st;
		st = tmp;
	}
	ast = st2;
	st = 1;
	st2 = 0;
	for (int i = 2; i < D; i++) {
		tmp = st;
		st += st2;
		st2 = tmp;
	}
	bst = st;
	//printf("%d %d\n", ast, bst);
	for (int j = 0;bst*j<=K; j++) {
		for (int i = 0; ast * i + bst * j <= K; i++) {
			if (ast * i + bst * j == K) {
				a = i;
				b = j;
			}
		}
	}
	printf("%d\n%d", a, b);
}