#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	char sm;
	bool D = true;
	string ipt;
	vector<deque<char>>v;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> ipt;
		for (int j = 0, k = ipt.size(); j < k; j++) v[i].push_back(ipt[j]);
	}
	const int k = v.size();
	for (; D;) {
		sm = 'a';
		D = false;
		for (int j = 0; j < k; j++) {
			if (!v[j].empty()) {
				sm = min(sm, v[j].front());
			}
		}
		for (int j = 0; j < k; j++) {
			if (!v[j].empty()) {
				if (v[j].front() == sm) {
					cout << sm;
					v[j].pop_front();
					break;
				}
			}
		}
		for (int j = 0; j < k; j++) {
			if (!v[j].empty()) {
				D = true;
				break;
			}
		}
	}
}