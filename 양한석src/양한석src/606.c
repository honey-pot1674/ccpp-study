#include <stdio.h>
#include <string.h>
int main() {
	char letter[28] = { 0 }, f[9] = "fighting";
	scanf("%s", letter);
	strcat(letter, f);
	printf("%s", letter);
}