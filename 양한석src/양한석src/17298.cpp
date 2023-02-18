#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> s;
	int a;
	cin >> a;
	int* pos = new int[a];
	int* ipt = new int[a];

	for (int i = 0; i < a; i++) {
		cin >> ipt[i];
		pos[i] = -1;
	}
	for (int i = a - 1; i >= 0; i--) {
		for (;!s.empty() && s.top() <= ipt[i];) {
			s.pop();
		}

		if (!s.empty()) {
			pos[i] = s.top();
		}
		s.push(ipt[i]);
	}
	for (int i = 0; i < a; i++) {
		cout << pos[i] << ' ';
	}
	delete[] pos, ipt;
}