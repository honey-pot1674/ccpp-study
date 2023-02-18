#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, ipt;
	int mx = 0;
	vector<int>sld;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		sld.push_back(ipt);
	}
	sort(sld.begin(), sld.end());
	for (int i = sld.size() / 2; i < n; i++) {
		mx += sld[i];
	}
	for (int i = sld.size() / 2 - 1; i >= 0; i--) {
		mx -= sld[i];
	}
	if (n % 2 == 0) {
		mx += sld[sld.size() / 2 - 1];
	}
	cout << mx;
}