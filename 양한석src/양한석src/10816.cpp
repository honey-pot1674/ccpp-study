#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	map<int, int>fuxk;
	int n, m, nipt, mipt;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> nipt;
		if (fuxk.find(nipt) != fuxk.end()) {
			++fuxk[nipt];
		}
		else {
			fuxk.insert(map<int, int>::value_type(nipt, 1));
		}
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> mipt;
		if (fuxk.find(mipt) != fuxk.end()) {
			cout << fuxk[mipt] << ' ';
		}
		else {
			cout << 0 << ' ';
		}
	}
}