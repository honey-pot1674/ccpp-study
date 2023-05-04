#include <iostream>
#include <deque>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	stack<int>s;
	deque<char>d;
	int n;
	char cmd, ipt;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == '1') {
			cin >> ipt;
			d.push_back(ipt);
			s.push(1);
		}
		else if (cmd == '2') {
			cin >> ipt;
			d.push_front(ipt);
			s.push(0);
		}
		else {
			if (!d.empty()) {
				if (s.top() == 1) {
					d.pop_back();
					s.pop();
				}
				else {
					d.pop_front();
					s.pop();
				}
			}
		}
	}
	for (int i = 0, j = d.size(); i < j; i++) cout << d[i];
	if (d.empty()) cout << 0;
}