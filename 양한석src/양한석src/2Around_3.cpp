#include <iostream>
#include <algorithm>
using namespace std;
char** ary;
int n, m;
int count(int r,int c) {
	if (r + 1 < n && c - 1 > 0) {
		if (ary[r + 1][c - 1] == 'X') {
			return 0;
		}
	}
	else if (r + 1 < n) {
		if (ary[r + 1][c] == 'X') {
			return 1;
		}
	}
	else if (r + 1 < n && c + 1 > 0) {
		if (ary[r + 1][c + 1] == 'X') {
			return 2;
		}
	}
	else {
		return min(count(r + 1, c - 1), min(count(r + 1, c), count(r + 1, c + 1)));
	}
}

void rc(int r, int c, int cln) {
	int cou;
	if (r == n) {
		cout << '\n';
		return;
	}
	if (ary[r][c] == 'X') {
		ary[r][c] = 'O';
		rc(r, c, cln + 1);
	}
	if (r + 1 < n && c - 1 > 0 && ary[r + 1][c - 1] == 'X') {
		cout << 'L';
		rc(r + 1, c - 1, cln);
		return;
	}
	else if (r + 1 < n && ary[r + 1][c] == 'X') {
		cout << 'D';
		rc(r + 1, c, cln);
		return;
	}
	else if (r + 1 < n && c + 1 > 0 && ary[r + 1][c + 1] == 'X') {
		cout << 'R';
		rc(r + 1, c + 1, cln);
		return;
	}
	else {
		cou = count(r, c);
		if (cou == 0) {
			rc(r + 1, c - 1, cln);
		}
		else if (cou == 1) {
			rc(r + 1, c, cln);
		}
		else {
			rc(r + 1, c + 1, cln);
		}
	}
	return;
}

int main() {

	int i, j;
	cin >> n >> m;
	ary = new char* [n];
	for (int i = 0; i < m; ++i)
		ary[i] = new char[m];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> ary[n][m];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (ary[i][j] == 'X') {
				cout << j + 1;
				rc(0,j,0);
			}
		}
	}
	
}