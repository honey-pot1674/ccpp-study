#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m;
	long long S, pwr;
	int fvec;
	string part, name;
	cin >> n;
	vector<vector<pair<string, long long>>>arr;
	vector<pair<pair<string,string>,long long>>sng;
	arr.resize(5);
	for (int i = 0; i < n; i++) {
		cin >> part;
		if (part == "Body") {
			fvec = 0;
		}
		else if (part == "Handle") {
			fvec = 1;
		}
		else if (part == "Wheel") {
			fvec = 2;
		}
		else if (part == "Engine") {
			fvec = 3;
		}
		else if (part == "Booster") {
			fvec = 4;
		}
		cin >> name >> pwr;
		arr[fvec].push_back(make_pair(name, pwr));
	}
	cin >> m;
	for (int i = 0; i < m; i++) {

	}
}