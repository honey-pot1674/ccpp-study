#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, chz = 0;
	bool D;
	string top;
	vector<string>v;
	cin >> n;
	if (n < 4) {
		cout << "sad";
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> top;
		D = true;
		for (int j = 0, k = v.size(); j < k; j++) {
			if (top == v[j]) {
				D = false;
				break;
			}
		}
		if (D) v.push_back(top);
	}
	for (int i = 0, j = v.size(); i < j; i++) if (v[i].size() >= 6) if (v[i][v[i].size() - 6] == 'C' && v[i][v[i].size() - 5] == 'h' && v[i][v[i].size() - 4] == 'e' && v[i][v[i].size() - 3] == 'e' && v[i][v[i].size() - 2] == 's' && v[i][v[i].size() - 1] == 'e') chz++;
	if (chz >= 4)cout << "yummy";
	else cout << "sad";
}