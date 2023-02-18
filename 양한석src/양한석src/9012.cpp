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
					s.push(')'); //������ �۷����� �׽�Ʈ ���̽��� �� ���� �صδ� ��ġ
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