#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, ipt;
	long long c = 1;
	cin >> n;
	vector<int>cs;
	cs.resize(n + 1);
	for (int i = 0; i < n + 1; i++) {
		cs[i] = 1;
	}
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		cs[ipt]++;
	}
	for (int i = 1; i < n + 1; i++) {
		c *= cs[i];
		c %= 1000000007;
	}
	cout << --c;
	
}