#include <stdio.h> //����Լ�
void re(int n) {
	if (n > 0) {
		printf("%d ", n);
		re(n - 1);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	re(n);
}