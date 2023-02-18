#include <stdio.h>
#include <string.h>

int main() {
	char ch[100] = { 0 };
	scanf("%s", ch);
	for (int i = 0; i < 100; i++) {
		if (ch[i] > 64 && ch[i] < 91) {
			ch[i] += 32;
		}
		if (ch[i] >= 'a' && ch[i] <= 'z') {
			printf("%c", ch[i]);
		}
		else if (ch[i] >= '0' && ch[i] <= '9') {
			printf("%c", ch[i]);
		}
	}
}