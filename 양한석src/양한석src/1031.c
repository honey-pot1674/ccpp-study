#include <stdio.h>
int bingo[5][5] = { {0} };
int count = 0;
void check(int x, int y) {
	if ((y < 1) && (bingo[x][y] == bingo[x][y + 1]) && (bingo[x][y] == bingo[x][y + 2]) && (bingo[x][y] == bingo[x][y + 3]) && (bingo[x][y] == bingo[x][y + 4])) {
		++count;
	}

	if ((x < 1) && (y < 1) && (bingo[x][y] == bingo[x + 1][y + 1]) && (bingo[x][y] == bingo[x + 2][y + 2]) && (bingo[x][y] == bingo[x + 3][y + 3]) && (bingo[x][y] == bingo[x + 4][y + 4])) {
		++count;
	}

	if ((x < 1) && (bingo[x][y] == bingo[x + 1][y]) && (bingo[x][y] == bingo[x + 2][y]) && (bingo[x][y] == bingo[x + 3][y]) && (bingo[x][y] == bingo[x + 4][y])) {		
		++count;
	}

	if ((x > 3) && (y < 1) && (bingo[x][y] == bingo[x - 1][y + 1]) && (bingo[x][y] == bingo[x - 2][y + 2]) && (bingo[x][y] == bingo[x - 3][y + 3]) && (bingo[x][y] == bingo[x - 4][y + 4])) {
		++count;
	}

	return 0;
}
int main() {
	int i, j;
	int num;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			scanf(" %d", &bingo[i][j]);
		}
	}

	for (i = 0; i < 25; i++) {
		count = 0;

		scanf(" %d", &num);

		for (j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				if (num == bingo[j][k]) {
					bingo[j][k] = 0;
				}
			}
		}

		for (j = 0; j < 5; j++) {
			for (int k = 0; k < 5; k++) {
				check(j, k);
			}
		}

		if (count >= 3) {
			break;
		}
	}
	printf("%d", i+1);
}