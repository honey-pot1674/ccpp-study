#include <stdio.h>
#include <string.h>

int main() {
	char ch[100] = { 0 }, ch1[100] = { 0 };
	int com;
	scanf("%s %s", ch, ch1);
	if (strlen(ch) > strlen(ch1)) {
		com = strlen(ch);
	}
	else {
		com = strlen(ch1);
	}
	printf("%d", com);
}