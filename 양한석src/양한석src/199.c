#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STRSWAP(x,y) strcpy(strtmp,x); strcpy(x,y); strcpy(y,strtmp)
#define INTSWAP(x,y) tmp=x; x=y; y=tmp

char strtmp[20] = { 0 };
int tmp;

typedef struct score {
	char name[20];
	int score[3];
	int sum;
}s;

int main() {
	int n;
	scanf("%d", &n);

	s* sc = malloc(sizeof(s) * n);

	int l;
	for (int i = 0; i < n; i++) {
		scanf(" %s", sc[i].name);
		for (int j = 0; j < 3; j++) {
			scanf(" %d", &sc[i].score[j]);
		}
		sc[i].sum = sc[i].score[0] + sc[i].score[1] + sc[i].score[2];
	}
	for (int i = 0; i < n; i++) {
		l = i;
		for (int j = i + 1; j < n; j++) {
			if (sc[j].sum > sc[l].sum) {
				l = j;
			}
		}
		STRSWAP(sc[i].name, sc[l].name);
		for (int j = 0; j < 3; j++) {
			INTSWAP(sc[i].score[j], sc[l].score[j]);
		}
		INTSWAP(sc[i].sum, sc[l].sum);
	}
	for (int i = 0; i < n; i++) {
		printf("%s ", sc[i].name);
		for (int j = 0; j < 3; j++) {
			printf("%d ", sc[i].score[j]);
		}
		printf("%d\n", sc[i].sum);
	}
}