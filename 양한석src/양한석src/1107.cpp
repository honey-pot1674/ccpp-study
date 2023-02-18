#include <iostream>
using namespace std;
bool remote[12] = { true };
int main() {
	int n, m;
	cin >> n >> m;
	if (m !=  0) {
		char btn;
		for (int i = 0; i < m; i++) {
			cin >> btn;
			if (btn - 48 >= 0) {
				remote[btn - 48] = false;
			}
			else {
				if (btn = '+') {
					remote[10] = false;
				}
				else if (btn = '-') {
					remote[11] = false;
				}
			}
		}
	}

}