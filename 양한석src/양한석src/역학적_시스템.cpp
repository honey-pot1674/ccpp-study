#include <iostream>
using namespace std;
int main() {
	int a, v0, v, t, s, trash;
	bool ba = false, bv = false, bt = false, bs = false;
	char ipt;
	cout << "�ʱ�ӵ� �Է�\n";
	cin >> v0;
	cout << "���߼ӵ�,���ӵ�,�ɸ��ð�,�̵��Ÿ��� 2�� �Է�(�ݵ�� �ҹ���, ��:\"t 5\",\"s 10\")\n";
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
			cout << "�� �Է��� �ݿ����� �ʽ��ϴ�.\n";
		}
	}
}