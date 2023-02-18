#include <stdio.h>
#include <string.h>
int main() {
	char key[27], str[81] = { 0 };
	int gap = 0;
	scanf("%s ", key);
	gets(str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] != 32) {
			if (str[i] >= 'a' && str[i] <= 'z') {
				gap = key[str[i] - 'a'] - str[i];
				printf("%c", str[i] + gap);
			}
			else if(str[i] >= 'A' && str[i] <= 'Z'){
				gap = key[str[i] - 'A'] - str[i] - 32;
				printf("%c", str[i] + gap);
			}
		}
		else if (str[i] == 32) {
			printf(" ");
		}
	}
}