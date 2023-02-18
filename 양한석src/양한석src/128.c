#include <stdio.h>
int main() {
	int n;
	int m = 0;
	for (int i = 1; i++;) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		if (n % 3 != 0 && n % 5 != 0) {
			m += 1;
		}
	}
	printf("%d", m);
}