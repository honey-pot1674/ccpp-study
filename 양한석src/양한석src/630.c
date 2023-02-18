#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	FILE* ip;
	FILE* op;

	ip = fopen("630input.txt", "rt");
	op = fopen("630output.txt", "wt");

	if (ip == NULL) {
		printf("파일열기 실패");
	}

	int n,i;
	fscanf(ip,"%d ", &n);
	char** mungtangyee = malloc(sizeof(char*) * n);
	for (i = 0; i < n; i++) {
		mungtangyee[i]=malloc(sizeof(char)*101);
		fgets(mungtangyee[i],101,ip);
	}

	int len = strlen(mungtangyee[i-1]);
	mungtangyee[i - 1][len] = '\n';
	mungtangyee[i - 1][len+1] = '\0';
	

	for (int i = n - 1; i >= 0; i--) {
		fprintf(op,"%s", mungtangyee[i]);
	}
}