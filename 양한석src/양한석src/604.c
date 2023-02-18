#include <stdio.h>
int main() {
	char ch[10][20] = { 0 }, a;
	for (int i = 0; i < 10; i++) {
		scanf(" %s", ch[i]);
	}
	scanf(" %c", &a);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 20; j++) {
			if (ch[i][j]==0) {
				if (ch[i][j - 1] == a) {
					printf("%s\n", ch[i]);
					break;
				}
			}
		}
	}
}