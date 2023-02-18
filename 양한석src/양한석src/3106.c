#include <stdio.h>
#include <math.h>
#include <string.h>
unsigned long long change(char t[],int j) {
    unsigned long long dec = 0;
    int len = strlen(t);
	for (int i = len - 1; i >= 0; i--) {
		if (t[i] >= 'A') {
            t[i]-=7;
		}
	}
	for (int i = 0; i < len; i++) {
		dec = dec * j + (t[i]-'0');
	}
	return dec;
}
int main() {
    unsigned long long dec;
    int cnt = 0, jin, jinsu;
    char input[64] = { 0 };
    char op[64], oprev[64];
    for (;;) {
        for (int i = 0; i < 64; i++) {
            op[i] = 32;
            oprev[i] = 32;
            input[i] = 32;
        }
        scanf(" %d", &jin);
        if (jin == 0) {
            break;
        }
        scanf(" %s %d", &input, &jinsu);
        dec = change(input, jin);

        for (int i = 0; ; i++) {
            op[i] = (dec % jinsu) + 48;
            if (op[i] > 57) {
                op[i] += 7;
            }
            dec /= jinsu;
            if (dec == 0) {
                break;
            }

        }
        cnt = 0;
        for (int i = 63; i >= 0; i--) {
            if (op[i] != 32) {
                oprev[cnt] = op[i];
                cnt++;
            }
        }
        for (int i = 0; i < 64; i++) {
            if (oprev[i] != 32) {
                printf("%c", oprev[i]);
            }
        }
        printf("\n");
    }
}