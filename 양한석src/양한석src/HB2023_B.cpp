#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int arr[500000] = { 0 };
int fuc[500000] = { 0 };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int i, j;
	int n, k;
	cin >> n >> k;
	
	for (i = 0; i < n; i++) {
		cin >> arr[i];
		fuc[arr[i] - 1] = i;
	}
	long long mn = 9223372036854775807;
	vector<int>idea;
	vector<int>part;
	for (i = 0, j = n - 1; i < j; i++) idea.push_back(fuc[i] - fuc[i + 1]);
	
	for (i = 0; i < n - k + 1; i++) {

		for (j = i; j < i + k; j++) part.push_back(arr[j]);
		sort(part.begin(), part.end(),greater<>());
		
		long long sum = 0;
		for (j = 0; j < k-1; j++) {

			int plus = 0;
			for (int l = part[j] -2; l >= part[j + 1] -1; l--) {
				plus += idea[l];
			}
			(plus > 0) ? sum += plus : sum -= plus;
		}
		mn = min(sum, mn);
		part.clear();
	}
	cout << mn;
}