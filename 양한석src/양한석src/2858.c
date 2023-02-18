#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int stick = 0;
	int piece = 0;
	char cmd[100000];
	scanf(" %s", cmd);
	for (int i = 0; i < strlen(cmd); i++) {
		if (cmd[i] == '(') {
			if (cmd[i + 1] == ')') {
				piece += stick;
				i++;
			}
			else {
				++stick;
			}
		}
		else if (cmd[i] == ')') {
			--stick;
			++piece;
		}
	}
	printf("%d", piece);
}