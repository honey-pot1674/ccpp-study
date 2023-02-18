#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* ip;
int* comb;
int n,k;
bool flag = false;

void nc(int start, int depth) {
	if (depth > k) {

		if (flag) {
			for (int i = 1; i <= k; i++) {
				printf("%d ", comb[i]);
			}
			exit(0);
		}

		for (int i = 1; i <= k; i++) {
			if (ip[i] != comb[i]) return;
		}


		flag = true;

		return;
	}
	for (int i = start; i <= n; i++) {
		comb[depth] = i;
		nc(i+1, depth + 1);
	}
}

int main() {
	scanf("%d %d", &n, &k);
	
	ip = malloc(sizeof(int) * (k + 1));
	comb = malloc(sizeof(int) * (k + 1));

	for (int i = 1; i <= k; i++) {
		scanf(" %d", &ip[i]);
	}
	nc(1, 1);
	printf("NONE");
	return 0;
}