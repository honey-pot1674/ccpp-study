#include <stdio.h>

struct Information {
	char name[5];
	int score;
	int rank;
};

int main() {
	FILE* in;
	FILE* out;

	in = fopen("input628.txt", "rt");
	out = fopen("output628.txt", "wt");

	struct Information ifm[10];
	int tmp, b, s, same[10] = { 0 };
	
	if (in == NULL) {
		printf("½ÇÆÐ");
	}

	for (int i = 0; i < 10; i++) {
		fscanf(in," %s %d", ifm[i].name, &ifm[i].score);
		ifm[i].rank = 1;
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (ifm[i].score < ifm[j].score) {
				ifm[i].rank += 1;
			}
		}
	}

	fprintf(out,"Name Score Rank");
	for (int i = 0; i < 10; i++) {
		fprintf(out,"\n%4s %5d %4d", ifm[i].name, ifm[i].score, ifm[i].rank);
	}
}