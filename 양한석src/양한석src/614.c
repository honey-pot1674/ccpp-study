#include <stdio.h>

typedef struct School {
	char name[20];
	char name2[20];
	int grade;
	int grade2;
} nojam;

int main() {
	nojam hec = { {"Jejuelementary"}, {0}, 6, 0 };
	scanf("%s %d", hec.name2, &hec.grade2);
	printf("%d grade in %s School\n", hec.grade, hec.name);
	printf("%d grade in %s School", hec.grade2, hec.name2);
}