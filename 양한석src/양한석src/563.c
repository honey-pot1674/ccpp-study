#include <stdio.h>
#define SWAP(x,y) tmp = x; x=y; y=tmp
//선택정렬
int main() {
	int grp[11],i,j,largest,tmp;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &grp[i]);
	}

	for(i=0; i<9; i++){
		largest = i;
		for (j = i + 1; j < 10; j++) {
			if (grp[largest] < grp[j]) {
				largest = j;
			}
		}
		SWAP(grp[largest], grp[i]);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", grp[i]);
	}
}