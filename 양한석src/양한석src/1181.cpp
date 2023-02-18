#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string oh[20000];
bool D(string a, string b) {
	return a.size() < b.size();
}
bool D2(string a, string b) {
	return a < b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> oh[i];
	}
	sort(oh, oh + n, D);
	for (int i = 0; i < n; i++) {
		int j;
		for (j = i; j < n; j++) {
			if (oh[i].size() != oh[j].size()) {
				break;
			}
		}
		sort(oh + i, oh + j, D2);
		i = j-1;
	}
	cout << oh[0] << '\n';
	for (int i = 1; i < n; i++) {
		if (oh[i - 1] != oh[i]) {
			cout << oh[i] << '\n';
		}
	}
}