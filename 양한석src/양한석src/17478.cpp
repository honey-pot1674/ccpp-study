#include <iostream>
using namespace std;
int n;
void chat(int x) {
	for (int i = 0; i < 4 * (n - x); i++) cout << "_";
	cout << "\"����Լ��� ������?\"\n";
	if (x == 0) {
		for (int i = 0; i < 4 * (n - x); i++) cout << "_";
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
	}
	else {
		for (int i = 0; i < 4 * (n - x); i++) cout << "_";
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		for (int i = 0; i < 4 * (n - x); i++) cout << "_";
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		for (int i = 0; i < 4 * (n - x); i++) cout << "_";
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		chat(x - 1);
	}
	for (int i = 0; i < 4 * (n - x); i++) cout << "_";
	cout << "��� �亯�Ͽ���.\n";
	return;
}
int main() {	
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	chat(n);
}