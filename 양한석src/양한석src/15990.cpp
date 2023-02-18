#include <iostream>
#define MOD (unsigned int)(1e9 + 9)
using namespace std;
unsigned int arr[100001][4] = { {0} };
void dp() {
	arr[1][1] = 1;
	arr[2][2] = 1;
	arr[3][1] = arr[3][2] = arr[3][3] = 1;
	for (int i = 4; i <= 100000; i++) {
		arr[i][1] = (arr[i - 1][2] + arr[i - 1][3]) % MOD;
		arr[i][2] = (arr[i - 2][1] + arr[i - 2][3]) % MOD;
		arr[i][3] = (arr[i - 3][1] + arr[i - 3][2]) % MOD;
	}
}

int main() {
	dp();
	int T, n;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << (arr[n][1]+arr[n][2]+arr[n][3]) % MOD << '\n';
	}
}