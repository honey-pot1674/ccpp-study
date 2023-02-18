#include <stdio.h>
#include <string.h>

int main() {
	char ch[100] = { 0 };
	int n;
	scanf("%s", ch);
	for (;;) {
		scanf("%d", &n);
		if (n > strlen(ch)) {
			n = strlen(ch);
		}
		for (int i = n - 1; i < strlen(ch); i++) {
			ch[i] = ch[i + 1];
		}
		printf("%s\n", ch);
		if (strlen(ch) == 1) {
			break;
		}
	}
}