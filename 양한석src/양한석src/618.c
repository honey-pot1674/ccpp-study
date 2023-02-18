#include <stdio.h>
#include <string.h>
#define STRING_SWAP(x,y) strcpy(strtmp,x); strcpy(x,y); strcpy(y,strtmp)
#define DOUBLE_SWAP(x,y) dobtmp=x; x=y; y=dobtmp
#define INT_SWAP(x,y) tmp=x; x=y; y=tmp

char strtmp[20] = { 0 };
double dobtmp;
int tmp;

struct human {
	char name[20];
	int height;
	double weight;
};
int main() {
	struct human p[5];
	int bigest;
	for (int i = 0; i < 5; i++) {
		scanf("%s %d %lf", p[i].name, &p[i].height, &p[i].weight);
	}
	for (int i = 0; i < 5; i++) {
		bigest = i;
		for (int j = i + 1; j < 5; j++) {
			if (strcmp(p[bigest].name, p[j].name) > 0) {
				bigest = j;
			}
		}
		STRING_SWAP(p[i].name, p[bigest].name);
		DOUBLE_SWAP(p[i].weight, p[bigest].weight);
		INT_SWAP(p[i].height, p[bigest].height);
	}
	printf("name\n");
	for (int i = 0; i < 5; i++) {
		printf("%s %d %.1lf\n", p[i].name, p[i].height, p[i].weight);
	}
	printf("\n");
	for (int i = 0; i < 5; i++) {
		bigest = i;
		for (int j = i + 1; j < 5; j++) {
			if (p[j].weight>p[bigest].weight) {
				bigest = j;
			}
		}
		STRING_SWAP(p[i].name, p[bigest].name);
		DOUBLE_SWAP(p[i].weight, p[bigest].weight);
		INT_SWAP(p[i].height, p[bigest].height);
	}
	printf("weight\n");
	for (int i = 0; i < 5; i++) {
		printf("%s %d %.1lf\n", p[i].name, p[i].height, p[i].weight);
	}
}