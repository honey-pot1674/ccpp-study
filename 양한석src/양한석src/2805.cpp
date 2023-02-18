#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>len;
long long n;
bool chec(int mid) {
	long long sum = 0;
	for (int i = 0; i < len.size(); i++) if(len[i]>mid) sum += len[i] - mid;
	if (sum >= n) return true;
	else return false;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int k;
	int mx = 0, ipt;
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> ipt;
		len.push_back(ipt);
		mx = max(mx, ipt);
	}
	mx++;
	int start = 0;
	int end = mx;
	for (;;) {
		int mid = (start + end) / 2;
		if (chec(mid))start = mid;
		else end = mid;
		if (start + 1 >= end)break;
	}
	cout << start;
}