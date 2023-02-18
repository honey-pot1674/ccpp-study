#include <iostream>
#include <stack>
using namespace std;
int main() {
	int t;
	cin >> t;
	string vpsd;
	stack<char>s;


	for (int i = 0; i < t; i++) {
		cin >> vpsd;		
		for (int j = 0; j < vpsd.length(); j++) {
			if (vpsd[j] == '(') {
				s.push(vpsd[j]);
			}
			else {
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else if (s.empty()) {
					s.push(')'); //어차피 글러먹은 테스트 케이스라 못 비우게 해두는 장치
				}
			}
		}
		if (s.empty()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

		for (; s.size() != 0;) {
			s.pop();
		}
	}

}