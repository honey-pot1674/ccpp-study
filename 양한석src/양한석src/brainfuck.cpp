#include <iostream>
#include <stack>
using namespace std;
int main() {
	char arr[32768] = { 0 };
	char* arp = &arr[0];
	char cmd[32768];
	stack<int> inp, otp;
	for (int i = 0; i < 32768; i++) {
		cin >> cmd[i];
		if (cmd[i] == '#') {
			break;
		}
	}
	for (int i = 0; i < strlen(cmd); i++) {
		if (cmd[i] == '>') {
			++arp;
		}
		else if (cmd[i] == '<') {
			--arp;
		}
		else if (cmd[i] == '+') {
			++* arp;
		}
		else if (cmd[i] == '-') {
			--* arp;
		}
		else if (cmd[i] == '.') {
			cout << *arp;
		}
		else if (cmd[i] == ',') {
			cin >> *arp;
		}
		else if (cmd[i] == '[') {
			if (*arp != 0) {
				inp.push(i);
			}
			
		}
		else if (cmd[i] == ']') {
			if (*arp != 0 && !inp.empty()) {
				i = inp.top();
				inp.pop();
			}
		}
	}
}