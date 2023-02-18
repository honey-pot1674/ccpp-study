#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool D(pair<int, int>a, pair<int, int>b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}
int main() {
	vector<pair<int, int>>pnt;
	pair<int, int>ipt;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt.first >> ipt.second;
		pnt.push_back(ipt);
	}
	sort(pnt.begin(), pnt.end(), D);
	for (int i = 0; i < pnt.size(); i++) {
		cout << pnt[i].first << ' ' << pnt[i].second << '\n';
	}
}