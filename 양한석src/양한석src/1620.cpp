#include <iostream>
#include <vector>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<string>dict;
	int n, m;
	string ipts;
	dict.push_back(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> ipts;
		dict.push_back(ipts);
	}

}