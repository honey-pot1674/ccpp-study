#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct cloth {
	char name[21];
	int num;
}c;
int main() {
	c clh[30];
	int TC, N, cnt, i, j;
	char dummy[21], sec[21];
	int max;
	bool D;
	scanf("%d", &TC);
	for (i = 0; i < TC; i++) {
		cnt = 0;
		max = 1;
		scanf(" %d", &N);
		for (j = 0; j < N; j++) {
			scanf(" %s %s", dummy, sec);
			D = 1;
			for (int k = 0; k < cnt; k++) {
				if (strcmp(sec, clh[k].name) == 0) {
					++clh[k].num;
					D = 0;
					break;
				}
			}
			if (D) {
				strcpy(clh[cnt].name, sec);
				clh[cnt++].num = 1;
			}
		}
		for (j = 0; j < cnt; j++) {
			max *= clh[j].num + 1;
		}
		max--;
		printf("%d\n", max);
	}
}