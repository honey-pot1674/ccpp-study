#include <stdio.h>
#include <string.h>
int main() {
	FILE* in;
	FILE* out;
	char stnc[100] = { 0 }, word[50][100] = { 0 };//
	int line = 0, now = 0, lenth = 0;
	
	in = fopen("213input.txt", "rt");
	out = fopen("213output.txt", "wt");

	if (in == NULL) {
		printf("flie '213input.txt' not founded");
	}
	else {
		fgets(stnc, 100, in);

		for (int i = 0; i < strlen(stnc); i++) {
			if (stnc[i] == ' ') {
				line++;
				now = 0;//
			}
			else {
				word[line][now++] = stnc[i];//
			}
		}
		lenth = strlen(word[0]);
		for (int i = 1; i < line + 1; i++) {
			if (lenth < strlen(word[i])) {
				lenth = strlen(word[i]);
			}
		}
		fprintf(out,"%d\n", strlen(stnc));
		for (int i = 0; i < line + 1; i++) {
			if (strlen(word[i]) == lenth) {
				fprintf(out,"%s ", word[i]);
			}
		}
	}
}