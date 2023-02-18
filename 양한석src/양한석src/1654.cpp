#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<long long>len;
int n;
bool chec(int mid) {
	int sum = 0;
	for (int i = 0; i < len.size(); i++) sum += len[i] / mid;
	if (sum >= n) return true;
	else return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int k;
	long long mx = 0, ipt;
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> ipt;
		len.push_back(ipt);
		mx = max(mx, ipt);
	}
	mx++;
	long long start = 0;
	long long end = mx;
	for (;;) {
		int mid = (start + end) / 2;
		if (chec(mid))start = mid;
		else end = mid;
		if (start + 1 >= end)break;
	}
	cout << start;
}