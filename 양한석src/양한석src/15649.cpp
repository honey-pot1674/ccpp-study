#include <iostream>
#define MAX 9
using namespace std;
int n, m;
bool num[MAX] = { false };
int arr[MAX] = { 0 };
void mnm(int depth) {
	if (depth > m) {
		for (int i = 1; i <= m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (!num[i]) {
				arr[depth] = i;
				num[i] = true;
				mnm(depth + 1);
				num[i] = false;
			}
		}
	}
	return;
}
int main() {
	cin >> n >> m;
	mnm(1);
}