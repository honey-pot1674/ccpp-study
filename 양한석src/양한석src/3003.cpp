#include <iostream>
using namespace std;
int main() {
	int set[6] = { 1,1,2,2,2,8 };
	int ipt[6];
	for (int i = 0; i < 6; i++) cin >> ipt[i];
	for (int i = 0; i < 6; i++) cout << set[i] - ipt[i] << ' ';
}