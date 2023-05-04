#include <iostream>
#include <queue>
using namespace std;
int main() {
	queue<int>dur;
	int n, l, c, m = 0, a = 0;
	cin >> n >> l;
	for (int i = 0; i < l; i++) dur.push(0);
	for (int i = 0; i < n; i++) {
		cin >> c;
		a += c;
		dur.push(c);
		a -= dur.front();
		dur.pop();
		if (a >= 129 && a <= 138) m++;
	}
	cout << m;
}