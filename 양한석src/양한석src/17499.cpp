#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int>d;
	int st = 0;
	int ipt, n, q;
	int s, x;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		d.push_back(ipt);
	}
	for (int i = 0; i < q; i++) {
		cin >> ipt;
		if (ipt == 1) {
			cin >> s >> x;
			d[(st + s - 1) % n] += x;
		}
		else if (ipt == 2) {
			cin >> s;
			st = (st + n - s) % n;
		}
		else if (ipt == 3) {
			cin >> s;
			st = (st + s) % n;
		}
	}
	for (int i = st; i < st + n; i++) {
		cout << d[i % n] << ' ';
	}
}