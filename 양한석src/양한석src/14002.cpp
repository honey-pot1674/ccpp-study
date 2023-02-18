#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
	stack<int>s;
	int n, l, mx = 1, mxi = 1, cnt = 1;
	int ara[1001];
	int arl[1001] = { 0 };

	cin >> n;

	for (int i = 1; i <= n; i++)
		arl[i] = 1;

	for (int i = 1; i <= n; i++)
		cin >> ara[i];

	for (int i = 2; i <= n; i++) {

		l = 0;

		for (int j = i - 1; j > 0; j--) {
			if (ara[i] > ara[j]) {
				l = max(l, arl[j]);
			}
		}

		arl[i] += l;

		mxi = (mx < arl[i]) ? i : mxi;
		mx = max(mx, arl[i]);		
	}

	cout << mx << '\n';
	cnt = mx;
	
	for (int i = n; i >= 1; i--) {
		if (arl[i] == cnt) {
			s.push(ara[i]);
			--cnt;
		}
	}
	
	for (; !s.empty();) {
		cout << s.top()<<' ';
		s.pop();
	}
}