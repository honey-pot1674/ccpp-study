#include <stdio.h>
int main() {
	char dish[51] = { 0 };
	int l = 10;
	scanf("%s",dish);
	for (int i = 1; dish[i] != 0; i++) {
		if (dish[i] == dish[i - 1]) {
			l += 5;
		}
		else {
			l += 10;
		}
	}
	printf("%d", l);
}