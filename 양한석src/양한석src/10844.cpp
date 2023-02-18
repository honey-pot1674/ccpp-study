/*
0   1   2   3   4   5   6   7   8   9
0   1   1   1   1   1   1   1   1   1
1   1   2   2   2   2   2   2   2   1
1   3   3   4   4   4   4   4   3   2
.
.
.
*/
#include <iostream>
#define MAX (int)1e+9
using namespace std;
int arr[11][101] = { 0 };
void stair() {
	arr[1][1] = arr[2][1] = arr[3][1] = arr[4][1] = arr[5][1] = arr[6][1] = arr[7][1] = arr[8][1] = arr[9][1] = 1;
	arr[10][1] = 9;
	for (int i = 2; i <= 100; i++) {
		arr[0][i] = arr[1][i - 1];
		for (int j = 1; j < 9; j++) {
			arr[j][i] = arr[j - 1][i - 1] + arr[j + 1][i - 1];
		}
		arr[9][i] = arr[8][i - 1];
		for (int j = 0; j < 10; j++) {
			arr[j][i] %= MAX;
			arr[10][i] += arr[j][i];
			arr[10][i] %= MAX;
		}
	}
	return;
}
int main() {
	stair();
	int n;
	cin >> n;
	cout << arr[10][n];
}