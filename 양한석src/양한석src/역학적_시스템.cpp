#include <iostream>
using namespace std;
int main() {
	int a, v0, v, t, s, trash;
	bool ba = false, bv = false, bt = false, bs = false;
	char ipt;
	cout << "초기속도 입력\n";
	cin >> v0;
	cout << "나중속도,가속도,걸린시간,이동거리중 2개 입력(반드시 소문자, 예:\"t 5\",\"s 10\")\n";
	for (;;) {
		cin >> ipt;
		if (ipt == 't') {
			cin >> t;
			if (t) {
				bt = true;
			}
			else {
				bt = false;
			}
		}
		else if (ipt == 'v') { 
			cin >> v;
			if (v) {
				bv = true;
			}
			else {
				bv = false;
			}
		}
		else if (ipt == 's') {
			cin >> s;
			if (s) {
				bs = true;
			}
			else {
				bs = false;
			}
		}
		else if (ipt == 'a') {
			cin >> a;
			if (a) {
				ba = true;
			}
			else {
				ba = false;
			}
		}
		else if (ipt == '0') {
			break;
		}
		else {
			cin >> trash;
			cout << "이 입력은 반영되지 않습니다.\n";
		}
	}
}