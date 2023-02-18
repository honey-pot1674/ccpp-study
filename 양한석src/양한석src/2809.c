#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	int n,sq;
	int cnt=0,cnt2=0;
	scanf("%d", &n);
	sq = (int)sqrt(n);
	for (int i = 1; i <= sq; i++) {
		if (n % i == 0) {
			cnt++;
		}
	}
	int* arr = malloc(sizeof(int) * 2 * cnt);
	for (int i = 1; i <= sq; i++) {
		if (n % i == 0) {
			arr[cnt2] = i;
			if (i != n / i) {
				arr[2 * cnt - cnt2++ - 1] = n / i;
			}
		}
	}
	for (int i = 0; i < 2 * cnt; i++) {
		if (arr[i] != 0) {
			printf("%d ", arr[i]);
		}
	}
}