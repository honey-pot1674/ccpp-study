#include <stdio.h> //Àç±ÍÇÔ¼ö
int re(int n) {
	if (n > 1) {
		return re(n / 2) + re(n - 1);
	}
	else if (n == 1) {
		return 1;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", re(n));
}