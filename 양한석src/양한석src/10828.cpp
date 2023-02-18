#include <iostream>
#include <stack>
using namespace std;
int main() {
	int n;
	cin >> n;
	string cmd;
	int num;
	stack<int>st;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd.compare("push") == 0) {
			cin >> num;
			st.push(num);
		}
		if (cmd.compare("top") == 0) {
			if (st.size() == 0) {
				cout << -1 << endl;
				continue;
			}
			cout << st.top() << endl;
		}
		if (cmd.compare("size") == 0) {
			cout << st.size() << endl;
		}
		if (cmd.compare("empty") == 0) {
			cout << st.empty() << endl;
		}
		if (cmd.compare("pop") == 0) {
			if (st.size() == 0) {
				cout << -1 << endl;
				continue;
			}
			cout << st.top() << endl;
			st.pop();
		}
	}
}