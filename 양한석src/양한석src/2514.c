#include <stdio.h>
int main() {
	char str[10000] = { 0 };
	int koi = 0, ioi = 0;
	scanf("%s", str);
	for (int i = 2; str[i] != 0; i++) {
		if (str[i] == 'I' && str[i-1] == 'O') {
			if (str[i - 2] == 'K') {
				++koi;
			}
			else if (str[i - 2] == 'I') {
				++ioi;
			}
		}
	}
	printf("%d\n%d", koi, ioi);
}