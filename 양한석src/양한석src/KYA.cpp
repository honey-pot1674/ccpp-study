#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	queue<char>k, y;
	k.push('K'); k.push('O'); k.push('R'); k.push('E'); k.push('A');
	y.push('Y'); y.push('O'); y.push('N'); y.push('S'); y.push('E'); y.push('I');
	cin >> s;
	for (int i = 0, j = s.size(); i < j; i++) {
		if (k.front() == s[i]) k.pop();
		if (y.front() == s[i]) y.pop();
		if (k.empty()) {
			cout << "KOREA";
			break;
		}
		if (y.empty()) {
			cout << "YONSEI";
			break;
		}
	}
}