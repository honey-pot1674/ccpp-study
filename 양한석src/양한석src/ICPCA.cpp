#include <iostream>
using namespace std;
int main() {
	int n, yr[4] = { 3,2,0,2 }, sto;
	int num = 0;
	int cre;
	cin >> n;
	for (int i = 2023; i <= n; i++) {
		bool year[4] = { false, };
		cre = 0;
		sto = i;
		for (; sto > 0; sto /= 10) if (sto % 10 == yr[cre]) cre++;
		if (cre > 3) num++;
	}
	cout << num;
}