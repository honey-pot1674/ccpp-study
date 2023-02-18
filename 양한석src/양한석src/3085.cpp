#include <algorithm>
#include <iostream>

using namespace std;

int n;
int m = 0;
char board[50][50] = { 0 };

void icheck(int x) {
	int combo = 1, big = 0;
	for (int i = 1; i < n; i++) {
		if (board[i][x] == board[i - 1][x]) {
			++combo;
		}
		else {
			big = max(big, combo);
			combo = 1;
		}
	}
	big = max(big, combo);
	combo = 1;
	for (int i = 1; i < n; i++) {
		if (board[i][x + 1] == board[i - 1][x + 1]) {
			++combo;
		}
		else {
			big = max(big, combo);
			combo = 1;
		}
	}
	big = max(big, combo);
	m = max(m, big);
	return;
}

void jcheck(int x) {
	int combo = 1, big = 0;
	for (int i = 1; i < n; i++) {
		if (board[x][i] == board[x][i - 1]) {
			++combo;
		}
		else {
			big = max(big, combo);
			combo = 1;
		}
	}
	big = max(big, combo);
	combo = 1;
	for (int i = 1; i < n; i++) {
		if (board[x + 1][i] == board[x + 1][i - 1]) {
			++combo;
		}
		else {
			big = max(big, combo);
			combo = 1;
		}
	}
	big = max(big, combo);
	m = max(m, big);
	return;
}
void iline(int x) {
	int combo = 1, big = 0;
	for (int i = 1; i < n; i++) {
		if (board[x][i] == board[x][i - 1]) {
			++combo;
		}
		else {
			big = max(big, combo);
			combo = 1;
		}
	}
	big = max(big, combo);
	m = max(m, big);
	return;
}
void jline(int x) {
	int combo = 1, big = 0;
	for (int i = 1; i < n; i++) {
		if (board[i][x] == board[i - 1][x]) {
			++combo;
		}
		else {
			big = max(big, combo);
			combo = 1;
		}
	}
	big = max(big, combo);
	m = max(m, big);
	return;
}

int main() {

	int i, j;

	cin >> n;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)	cin >> board[i][j];
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {

			if (j < n - 1) {
				swap(board[i][j], board[i][j + 1]);
				icheck(j);
				iline(i);
				swap(board[i][j], board[i][j + 1]);
			}

			if (i < n - 1) {
				swap(board[i][j], board[i + 1][j]);
				jcheck(i);
				jline(j);
				swap(board[i][j], board[i + 1][j]);
			}

		}
		if (m == n) {
			break;
		}
	}
	cout << m;
}