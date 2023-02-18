#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n, m;
	char board[8][8] = {
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'},
		{'B','W','B','W','B','W','B','W'},
		{'W','B','W','B','W','B','W','B'} };
	char box[50][50] = { {0} };
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> box[i][j];
		}
	}
	int mini = 64;

	for (int i = 0; i + 7 < n; i++) {
		for (int j = 0; j + 7 < m; j++) {
			int count = 0;
			for (int k = 0; k < 8; k++) for (int l = 0; l < 8; l++) if (board[k][l] != box[i + k][j + l])count++;
			mini = min(mini, min(count, 64 - count));
		}
	}

	cout << mini;
}