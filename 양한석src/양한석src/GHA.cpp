#include <iostream>
using namespace std;
int main() {
	int n, sum = 0;
	string s;
	for (int i = 0; i < 4; i++) {
		cin >> s >> n;
		if (s == "Es") sum += n * 21;
		else sum += n * 17;
	}
	cout << sum;
}