#include <stdio.h>
int main() {
	int board[19][19] = { {0} };
	int i, j;
	int win = 0;
	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			scanf(" %d", &board[i][j]);
		}
	}
}