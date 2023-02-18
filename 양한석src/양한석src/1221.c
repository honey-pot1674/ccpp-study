#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	int top = 0;
	int data;
	char cmd;
	scanf("%d", &n);
	int* stack = malloc(sizeof(int) * n);
	scanf(" %d", &stack[0]);
	for (int i = 1; i < n; i++) {
		scanf(" %c", &cmd);
		if (cmd >= '0' && cmd <= '9') {
			stack[++top] = cmd - 48;
		}
		if (cmd == '+') {
			stack[top - 1] += stack[top];
			top--;
		}
		if (cmd == '-') {
			stack[top - 1] -= stack[top];
			top--;
		}
		if (cmd == '*') {
			stack[top - 1] *= stack[top];
			top--;
		}
		if (cmd == '/') {
			stack[top - 1] /= stack[top];
			top--;
		}
	}
	printf("%d", stack[top]);
}