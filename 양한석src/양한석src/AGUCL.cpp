#include <iostream>
#include <stack>
#define GOAT 1000000007
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	stack<char>t;
	long long bi = 0;
	cin >> s;
	for (int i = 0, j = s.size(); i < j; i++) t.push(s[i]);
	for (; !t.empty();) {
		bi *= 2;
		if (t.top() == 'O') {
			bi++;
		}
		bi %= GOAT;
		t.pop();
	}
	cout << bi;
}