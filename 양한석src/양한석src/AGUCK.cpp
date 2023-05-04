#include <iostream>
#include <stack>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	stack<string>s;
	string ipt;
	long long bt = 0;
	cin >> ipt;
	s.push("[");
	for (; !s.empty();) {
		cin >> ipt;
		if (ipt[0] >= '0' && ipt[0] <= '9')bt += 8;
		else if (ipt[0] == '[')s.push("[");
		else if (ipt[0] == ']') {
			s.pop();
			bt += 8;
		}
		else bt += ipt.size() + 12;
	}
	cout << bt;
}