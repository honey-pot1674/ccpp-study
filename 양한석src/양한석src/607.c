#include <stdio.h>
#include <string.h>
int main() {
	char a[20] = { 0 }, b[22] = { 0 };
	scanf("%s %s", a, b);
	strncpy(b, a, 2);
	strncat(b, a, 2);
	printf("%s", b);
}