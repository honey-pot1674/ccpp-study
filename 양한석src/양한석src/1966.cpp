#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
	queue<pair<int, bool>>p;
	pair<int, bool>ipt;
	int tc, n, m, num;
	int mx;
	cin >> tc;
	for (int i = 0; i < tc; i++) {
		for (; !p.empty();) p.pop();
		cin >> n >> m;
		for (int j = 0; j < n; j++) {
			cin >> num;
			ipt.first = num;
			if (j == m) ipt.second = true;
			else ipt.second = false;
			p.push(ipt);
		}
		int count = 0;
		for (;!p.empty();) {
			mx = p.front().first;
			for (int j = 0; j < p.size(); j++) {
				mx = max(mx, p.front().first);
				p.push(p.front());
				p.pop();
			}
			for (int j = 0; j < p.size(); j++) {
				if (p.front().first >= mx) {
					count++;
					if (p.front().second) cout << count << '\n';
					p.pop();
					break;
				}
				else {
					p.push(p.front());
					p.pop();
				}
			}
		}
	}
}