#include<iostream>
#define MAX 100000
using namespace std;
int nt[MAX + 1] = { 0 };
void fuc() {
	nt[0] = 1;
	nt[1] = 3;
	for (int i = 2; i <= MAX; i++) {
		nt[i] = ((nt[i - 1] * 2) + nt[i - 2]) % 9901;
	}
	return;
}
int main() {
	fuc();
	int n;
	cin >> n;
	cout << nt[n];
	return 0;
}