#include <stdio.h>
#include <string.h>
int main() {
	char arr[32768] = { 0 };
	char* arp = &arr[0];
	char cmd[32768];
	int stack = 0;
	for (int i = 0; i < 32768; i++) {
		scanf(" %c", &cmd[i]);
		if (cmd[i] == '#') {
			break;
		}
	}
	for (int i = 0; i < strlen(cmd); i++) {
		if (cmd[i] == '>') {
			++arp;
		}
		if (cmd[i] == '<') {
			--arp;
		}
		if (cmd[i] == '+') {
			++* arp;
		}
		if (cmd[i] == '-') {
			--* arp;
		}
		if (cmd[i] == '.') {
			printf("%c", *arp);
		}
		if (cmd[i] == ',') {
			scanf(" %c", *arp);
		}
		if (cmd[i] == '[') {	//'[' �� ���� ��
			if (*arp == 0) {	//���� �����Ͱ� ����Ű�� ��ġ�� ���� 0�̶��
				stack = 0;		//������ 0���� �����ϰ�
				for (int j = i; j < strlen(cmd); j++) {    //
					if (cmd[j] == '[') {
						++stack;
					}
					if (cmd[j] == ']') {
						--stack;
					}
					if (stack == 0) {
						i = j;
						break;
					}
				}
			}
		}
		if (cmd[i] == ']') {
			if (*arp != 0) {
				stack = 0;
				for (int j = i; j >= 0; j++) {
					if (cmd[j] == '[') {
						--stack;
					}
					if (cmd[j] == ']') {
						++stack;
					}
					if (stack == 0) {
						i = j;
						break;
					}
				}
			}
		}
	}
}