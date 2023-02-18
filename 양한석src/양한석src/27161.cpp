#include <iostream>
using namespace std;
int main() {
	int n, x;
	int cl = 0;
	bool d = true;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> x;
		if (d) cl++;
		else cl--;
		if (cl <= 0) cl += 12;
		if (cl >= 13) cl -= 12;
		if ((s == "HOURGLASS") && !(cl == x)) d = !d;
		cout << cl << ' ';
		if ((s != "HOURGLASS") && (cl == x)) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
}