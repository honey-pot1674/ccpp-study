#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct well {
	char word[201];
	int num;
}s;
int main() {
	s grp[100];
	char stn[201] = { 0 };
	int cnt,plc;
	char* word;
	bool D;
	for (;;) {
		cnt = 0;
		for (int i = 0; i < 100; i++) {
			grp[i].num = 0;
			for (int j = 0; j < 201; j++) {
				grp[i].word[j] = 0;
			}
		}
		gets(stn);
		if (strcmp(stn, "END") == 0) {
			break;
		}
		word = strtok(stn, " ");
		for (; word != NULL;) {
			D = 1;
			for (int i = 0; i < cnt; i++) {
				if (strcmp(grp[i].word, word) == 0) {
					++grp[i].num;
					D = 0;
					break;
				}
			}
			if (D) {
				plc = cnt;
				for (int i = cnt - 1; i >= 0; i--) {
					if (strcmp(word, grp[i].word) < 0) {
						--plc;
						strcpy(grp[i + 1].word, grp[i].word);
						grp[i + 1].num = grp[i].num;
					}
					else {
						break;
					}
				}
				strcpy(grp[plc].word, word);
				grp[plc].num = 1;
				++cnt;
			}
			word = strtok(NULL," ");
		}
		for (int i = 0; i < cnt; i++) {
			printf("%s : %d\n", grp[i].word, grp[i].num);
		}
	}
}