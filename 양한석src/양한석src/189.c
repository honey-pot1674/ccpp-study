#include <stdio.h>
#include <string.h>
int main() {
	char str[101], words[50][100] = { 0 };
	gets(str);
	int line = 0, cnt = 0;



	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			line++;
			cnt = 0;
		}
		else {
			words[line][cnt++] = str[i];
		}	
	}
	for (int i = line; i >= 0; i--) {
		printf("%s\n", words[i]);
	}
}