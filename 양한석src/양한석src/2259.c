#include <stdio.h>
#define SWAP(x,y) tmp=x;x=y;y=tmp
int main() {
	int total = 0;
	int one, tmp;
	int l[6] = { 0 }, dummy;
	int time[6] = { 0 };
	scanf("%d", &one);
	for (int i = 0; i < 6; i++) {
		scanf(" %d %d", &dummy, &l[i]);
	}
	for (int i = 0; i < 6; i++) {
		if (i < 5) {
			time[i] = l[i] * l[i + 1];
		}
		else {
			time[i] = l[i] * l[0];
		}
		if (time[i] > time[0]) {
			SWAP(time[i], time[0]);
		}
	}
	for (int i = 1; i < 6; i++) {
		total += time[i];
	}
	total -= time[0];
	printf("%d", total * one);
}