#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int top = 0,bottom=0;
	int data;
	char cmd;
	scanf("%d", &n);
	int* stack = malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf(" %c", &cmd);
		if (cmd == 'i') {
			scanf(" %d", &data);
			stack[++top] = data;
		}
		else if (cmd == 'c') {
			printf("%d\n", top-bottom);
		}
		else if (cmd == 'o') {
			if (top == bottom) {
				printf("empty\n");
			}
			else {
				printf("%d\n", stack[++bottom]);
			}
		}
	}
}