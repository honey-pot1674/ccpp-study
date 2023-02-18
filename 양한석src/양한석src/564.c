#include <stdio.h>
int main() {
	int alpha[26] = { 0 };
	char ch;
	for (int i = 0; i<100; i++) {
		scanf(" %c", &ch);
		if (ch >= 65 && ch <= 90) {
			alpha[ch - 65]++;
		}
		else {
			break;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (alpha[i] > 0) {
			printf("%c : %d\n", i + 65, alpha[i]);
		}
	}
}