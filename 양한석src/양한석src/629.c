#include <stdio.h>
#include <string.h>

int main() {
	FILE* strin;
	FILE* strout;

	strin = fopen("629in.txt", "rt");
	strout = fopen("629out.txt", "wt");

	if (strin == NULL) {
		printf("파일열기 실패");
	}

	char fst[100], sec[100];
	fgets(fst,100,strin);
	fgets(sec,100,strin);
	if (strlen(fst) > strlen(sec)) {
		fprintf(strout,"%s\n%s", sec, fst);
	}
	else {
		fprintf(strout,"%s\n%s", fst, sec);
	}
}