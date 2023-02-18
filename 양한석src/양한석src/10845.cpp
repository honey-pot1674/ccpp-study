#include <iostream>
#include <queue>
using namespace std;
int main() {
	int n, ipt;
	queue<int> q;
	string cmd;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> ipt;
			q.push(ipt);
		}
		else if (cmd == "size") {
			cout << q.size() << endl;
		}
		else if (cmd == "pop") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (cmd == "empty") {
			cout << q.empty() << endl;
		}
		else if (cmd == "front") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
			}
		}
		else if (cmd == "back") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.back() << endl;
			}
		}
	}
}