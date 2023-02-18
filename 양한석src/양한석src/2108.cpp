#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int q[8001] = { 0 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int>r, a;
	int n, t, m = 0, f, i;
	double s = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> t;
		a.push_back(t);
		s += t;
		q[t + 4000]++;
	}
	sort(a.begin(), a.end());
	int c = a[(n - 1) / 2];
	for (i = 0; i <= 8000; i++) m = max(m, q[i]);
	for (i = 0; i <= 8000; i++) if (q[i] == m) r.push_back(i);
	f = r[r.size()>1] - 4000;
	cout << int(round(s / n)) << '\n' << c << '\n' << f << '\n' << a[n - 1] - a[0];
}
//±ØÇÑÀû ¾ÐÃà