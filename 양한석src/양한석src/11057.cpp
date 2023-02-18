#include <iostream>
#define MAX 1000
using namespace std;
int nt[10][MAX + 1] = { {0} };
int sum[MAX + 1] = { 0 };
void fuc() {
	for (int i = 0; i < 10; i++) {
		nt[i][0] = 1;
		sum[0] += nt[i][0];
	}
	for (int i = 1; i <= MAX; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = j; k < 10; k++) {
				nt[j][i] += nt[k][i - 1];
			}
			nt[j][i] %= 10007;
		}
		for (int j = 0; j < 10; j++) {
			sum[i] += nt[j][i];
		}
		sum[i] %= 10007;
	}
	return;
}
int main() {
	fuc();
	int n;
	cin >> n;
	cout << sum[n - 1];
	return 0;
}