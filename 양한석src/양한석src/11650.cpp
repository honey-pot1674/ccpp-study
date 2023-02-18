#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool D(pair<int, int>x, pair<int, int>y) {
	if (x.first == y.first) {
		return x.second < y.second;
	}
	return x.first < y.first;
}

int main() {
	vector<pair<int, int>>p;
	pair<int, int>ipt;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt.first >> ipt.second;
		p.push_back(ipt);
	}
	sort(p.begin(), p.end(), D);
	for (int i = 0; i < n; i++) {
		cout << p[i].first << ' ' << p[i].second << '\n';
	}
}