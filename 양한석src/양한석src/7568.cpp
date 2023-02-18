#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<pair<int, int>>arr;
	int n;
	pair<int, int>ipt;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ipt.first >> ipt.second;
		arr.push_back(ipt);
	}
	
	for (int i = 0; i < n; i++) {
		int num = 1;
		for (int j = 0; j < n; j++) {
			if (i!=j&&(arr[i].first < arr[j].first && arr[i].second < arr[j].second)) num++;
		}
		cout << num << ' ';
	}
}