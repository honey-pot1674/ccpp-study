#include <stdio.h>
#include <string.h>

int main() {
	char l[100] = { 0 };
	int c = 0, ab = 0;
	scanf("%s", l);
	for (int i = 0; i < strlen(l); i++) {
		if (l[i] == 'c') {
			c+=1;
		}
	}
	for (int i = 0; i < strlen(l); i++) {
		if (l[i] == 'a' && l[i + 1] == 'b') {
			ab+=1;
		}
	}
	if (c > 0) {
		printf("Yes ");
	}
	else {
		printf("No ");
	}
	if (ab > 0) {
		printf("Yes");
	}
	else {
		printf("No");
	}
}