#include <stdio.h>
int board[21][21] = { {0} };
int check(int x, int y) {
	//가로
	if ((y < 16) && (board[x][y] == board[x][y + 1]) && (board[x][y] == board[x][y + 2]) && (board[x][y] == board[x][y + 3]) && (board[x][y] == board[x][y + 4])) {
		if ((board[x][y] != board[x][y - 1]) && (board[x][y] != board[x][y + 5])) {
			return board[x][y];
		}
	}
	//하강 대각선
	if ((x < 16) && (y < 16) && (board[x][y] == board[x + 1][y + 1]) && (board[x][y] == board[x + 2][y + 2]) && (board[x][y] == board[x + 3][y + 3]) && (board[x][y] == board[x + 4][y + 4])) {
		if ((board[x][y] != board[x - 1][y - 1]) && (board[x][y] != board[x + 5][y + 5])) {
			return board[x][y];
		}
	}
	//세로
	if ((x < 16) &&(board[x][y] == board[x + 1][y]) && (board[x][y] == board[x + 2][y]) && (board[x][y] == board[x + 3][y]) && (board[x][y] == board[x + 4][y])) {
		if ((board[x][y] != board[x - 1][y]) && (board[x][y] != board[x + 5][y])) {
			return board[x][y];
		}
	}
	//상승 대각선
	if ((x > 6) && (y < 16) && (board[x][y] == board[x - 1][y + 1]) && (board[x][y] == board[x - 2][y + 2]) && (board[x][y] == board[x - 3][y + 3]) && (board[x][y] == board[x - 4][y + 4])) {
		if ((board[x][y] != board[x + 1][y - 1]) && (board[x][y] != board[x - 5][y + 5])) {
			return board[x][y];
		}
	}
	return 0;
}

int main() {
	int sto;
	int i, j;
	for (i = 1; i < 20; i++) {
		for (j = 1; j < 20; j++) {
			scanf(" %d", &board[i][j]);
		}
	}
	for (i = 1; i < 20; i++) {
		for (j = 1; j < 20; j++) {
			sto = check(i, j);
			if (sto != 0) {
				break;
			}
		}
		if (sto != 0) {
			break;
		}
	}
	printf("%d\n", sto);
	if (sto != 0) {
		printf("%d %d", i, j);
	}
}