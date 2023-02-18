#include <stdio.h>
#include <stdlib.h>
int count = 0;
typedef struct fuckitshitout {
	int num[3];
	int strike;
	int ball;
}f;
int main() {
	int N;
	scanf("%d", &N);
	f numTmp[504];
	int cnt = 0;
	int i;
	f* wtf = malloc(sizeof(f) * N);
	for (int i = 0; i < N; i++) {
		scanf("%1d%1d%1d %d %d", &wtf[i].num[0], &wtf[i].num[1], &wtf[i].num[2], &wtf[i].strike, &wtf[i].ball);
	}
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			for (int k = 1; k < 10; k++) {
				if ((i != j) && (j != k) && (k != i)) {
					numTmp[cnt].num[0] = i;
					numTmp[cnt].num[1] = j;
					numTmp[cnt++].num[2] = k;
				}
			}
		}
	}
	int s, b;
	int place;
	int subplace;
	int total = 0;
	cnt = 0;
	for (i = 0; i < 504; i++) {
		s = 0; b = 0;
		for (place = 0; place < 3; place++) {
			for (subplace = 0; subplace < 3; subplace++) {
				if (numTmp[i].num[place] == wtf[cnt].num[subplace]) {
					if (place == subplace) {
						s++;
					}
					else {
						b++;
					}
				}
			}
		}
		if (wtf[cnt].strike == s && wtf[cnt].ball == b) {
			if (cnt < N-1) {
				++cnt;
				--i;
			}
			else {
				total++;
				cnt = 0;
			}
		}
		else {
			cnt = 0;
		}
	}
	printf("%d", total);
}
