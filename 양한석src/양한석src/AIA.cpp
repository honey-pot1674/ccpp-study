#include <iostream>
using namespace std;
int a[200001] = { 0 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string cmd;
	int n, s, el, v;
	cin >> n >> s;
	for (int i = 1; i <= n; i++) cin >> a[i];
	cin >> cmd;
	v = 0; el = s;
	for (int i = 0, j = cmd.size(); i < j; i++) {
		if (cmd[i] == '+') v += a[el];
		else if (cmd[i] == '-') v -= a[el];
		el += v;
	}
	cout << el;
}