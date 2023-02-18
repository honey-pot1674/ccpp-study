#include <stdio.h>
int main() {
	int n;
	int sum = 0;
	int count = 0;
	scanf("%d", &n);
	for (int i = 1; ; i += 2) {
		sum += i;
		count+=1;
		if (sum >= n) {
			break;
		}
	}
	printf("%d %d", count, sum);
}