#include <stdio.h>
#define SWAP(x,y) tmp=x; x=y; y=tmp
int main() {
	int score[20], n,s,tmp,b;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &s);
		score[i] = s;
	}
	for (int i = 0; i < n; i++) {
		b = i;
		for (int j = i + 1; j < n; j++) {
			if (score[b] < score[j]) {
				b = j;
			}
		}
		SWAP(score[i], score[b]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", score[i]);
	}
}