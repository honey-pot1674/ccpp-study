#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, h, fur[4] = { 0,0,0,0 };
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> x;
		if (s == "STRAWBERRY") h = 0;
		else if (s == "BANANA") h = 1;
		else if (s == "LIME") h = 2;
		else if (s == "PLUM") h = 3;
		fur[h] += x;
	}
	if ((fur[1] == 5) || (fur[2] == 5) || (fur[3] == 5) || (fur[0] == 5)) cout << "YES";
	else cout << "NO";
}