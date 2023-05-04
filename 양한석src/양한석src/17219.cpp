#include <iostream>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	string srh;
	map<string, string>pw;
	pair<string, string>ipt;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> ipt.first >> ipt.second;
		pw.insert(ipt);
	}
	for (int i = 0; i < m; i++) {
		cin >> srh;
		auto itr = pw.find(srh);
		cout << itr->second << '\n';
	}
}