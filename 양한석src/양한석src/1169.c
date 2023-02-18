#include <stdio.h>
#include <stdbool.h>
int arr[6] = { 0 };
int n;
bool check[7] = { true };
void dice1(int depth) {
	if (depth > n) {
		for (int i = 1; i <= n; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 1; i <= 6; i++) {
		arr[depth] = i;
		dice1(depth + 1);
	}
}
void dice2(int start, int depth) {
	if (depth > n) {
		for (int i = 1; i <= n; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = start; i <= 6; i++) {
			arr[depth] = i;
			dice2(i,depth + 1);
		
	}
}
void dice3(int depth) {
	if (depth > n) {
		for (int i = 1; i <= n; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}

	for (int i = 1; i <= 6; i++) {
		if (check[i]) continue;

		arr[depth] = i;
		check[i] = true;
		dice3(depth + 1);
		check[i] = false;
	}
}
int main() {
	int type;
	scanf("%d %d", &n, &type);
	if (type == 1) {
		dice1(1);
	}
	if (type == 2) {
		dice2(1, 1);
	}
	if (type == 3) {
		dice3(1);
	}
}