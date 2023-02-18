#include <iostream>
#include <algorithm>
using namespace std;
int arr[50][50]{ {0} };
int cross(int x, int y, int var) {
	int sum = arr[x][y];
	int xsum = arr[x][y];
	for (int i = 1; i <= var; i++) {
		if (x + i < 50) {
			sum += arr[x + i][y];
		}
		if (x - i >= 0) {
			sum += arr[x - i][y];
		}
		if (y + i < 50) {
			sum += arr[x][y + i];
		}
		if (y - i >= 0) {
			sum += arr[x][y - i];
		}
		if (x + i < 50 && y + i < 50) {
			xsum += arr[x + i][y + i];
		}
		if (x - i >= 0 && y + i < 50) {
			xsum += arr[x - i][y + i];
		}
		if (x + i < 50 && y - i >= 0) {
			xsum += arr[x + i][y - i];
		}
		if (x - i >= 0 && y - i >= 0) {
			xsum += arr[x - i][y - i];
		}
	}
	return max(sum, xsum);
}
int main() {
	int n, m;
	int sum = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum = max(cross(i, j, m), sum);
		}
	}
	cout << sum;
	return 0;
}