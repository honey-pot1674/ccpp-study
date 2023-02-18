#include <stdio.h> //Àç±ÍÇÔ¼ö
int re(int n) {
	if (n > 1) {
		return n + re(n - 1);
	}
	else {
		return 1;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", re(n));
}