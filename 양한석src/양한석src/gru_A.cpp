#include <iostream>
using namespace std;
int main() {
	int time, drink;
	cin >> time >> drink;
	if (time >= 12 && time <= 16 && drink == 0) cout << 320;
	else cout << 280;
}