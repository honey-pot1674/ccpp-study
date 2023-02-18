#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
	char str[51] = { 0 };
	char list[1000][51] = { {0} };
	int cnt = 0;
	bool D = 1;
	char* word;
	for (;;) {
		gets(str);
		if (strcmp(str,"END")==0) {
			break;
		}
		word = strtok(str, " ");	
		for (; word != NULL;) {
			for (int i = 0; i < cnt; i++) {
				if (strcmp(word, list[i]) == 0) {
					D = 0;
					break;
				}
			}
			if (D) {
				strcpy(list[cnt++], word);
			}
			D = 1;
			word = strtok(NULL, " ");
		}
		for (int i = 0; i < cnt; i++) {
			printf("%s ", list[i]);
		}
		printf("\n");
	}
}