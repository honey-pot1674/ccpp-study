#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<vector<string>>user(201);
	int n;
	cin >> n;
	int x;
	string y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		user[x].push_back(y);
	}
	for (int i = 0; i < 201; i++) {
		if (!user[i].empty()) {
			for (int j = 0; j < user[i].size(); j++) {
				cout << i << ' ' << user[i][j] << '\n';
			}
		}
	}
}