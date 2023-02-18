#include <iostream>
using namespace std;
bool shxt[1001];
void eratosthenes() {
	shxt[0] = false;
	shxt[1] = false;
	for (int i = 2; i <= 1000; i++)	shxt[i] = true;

	for (int i = 2; i <= 1000; i++) {
		if (shxt[i]) {
			for (int j = 2; i * j <= 1000; j++) {
				shxt[i * j] = false;
			}
		}
	}
	return;
}
int main() {
	eratosthenes();
	int n;
	cin >> n;
	int in, num = 0;
	for (int i = 0; i < n; i++) {
		cin >> in;
		if (shxt[in]) {
			num++;
		}
	}
	cout << num;
}