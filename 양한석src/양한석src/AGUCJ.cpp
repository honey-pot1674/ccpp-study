#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	long long ipt;
	vector<long long>a;
	cin >> n >> m;
	cin >> ipt;
	a.push_back(ipt);
	for (int i = 1; i < m; i++) {
		cin >> ipt;
		a.push_back(a[i - 1] + ipt);
	}
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		int j;
		int cnt = 0;
		for (j = 0; j < m; j++) {
			if (a[j] >= ipt) {
				cnt = j + 1;
				break;
			}
		}
		if (cnt) cout << cnt << '\n';
		else cout << "Go away!\n";
	}
}