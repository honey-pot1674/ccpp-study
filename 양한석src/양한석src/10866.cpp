#include <iostream>
#include <deque>
using namespace std;
int main() {
	int n;
	deque<int> d;
	string cmd;
	int ipt;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cmd;
		if (cmd == "push_front") {
			cin >> ipt;
			d.push_front(ipt);
		}
		else if (cmd == "push_back") {
			cin >> ipt;
			d.push_back(ipt);
		}
		else if (cmd == "pop_front") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.front() << endl;
				d.pop_front();
			}
		}
		else if (cmd == "pop_back") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.back() << endl;
				d.pop_back();
			}
		}
		else if (cmd == "size") {
			cout << d.size() << endl;
		}
		else if (cmd == "empty") {
			cout << d.empty() << endl;
		}
		else if (cmd == "front") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.front() << endl;
			}
		}
		else if (cmd == "back") {
			if (d.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << d.back() << endl;
			}
		}
	}
	return 0;
}