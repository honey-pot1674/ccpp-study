#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bool S[21] = { false, };
	string s;
	int ipt, n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "add") {
			cin >> ipt;
			S[ipt] = true;
		}
		else if (s == "remove") {
			cin >> ipt;
			S[ipt] = false;
		}
		else if (s == "toggle") {
			cin >> ipt;
			S[ipt] = !S[ipt];
		}
		else if (s == "check") {
			cin >> ipt;
			if (S[ipt]) cout << "1\n";
			else cout << "0\n";
		}
		else if (s == "all") {
			for (int i = 1; i <= 20; i++) S[i] = true;
		}
		else if (s == "empty") {
			for (int i = 1; i <= 20; i++) S[i] = false;
		}
	}

}