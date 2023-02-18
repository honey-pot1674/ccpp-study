#include <stdio.h>
#include <string.h>

int main() {
	char a[101] = { 0 };
	scanf("%s", a);
	for (int i = 0; i < 101; i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			a[i] -= 32;
		}
	}
	for (int i = 0; i < 101; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			printf("%c", a[i]);
		}
	}
}