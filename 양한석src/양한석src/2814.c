#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	char by[31] = { 0 }, byrev[31] = { 0 };
	int dec = 0,cnt=0;
	
	scanf("%s", &by);
	for (int i=strlen(by)-1;i>=0;i--) {
		byrev[cnt] = by[i]-48;
		cnt++;
	}
	for (int i = 0;i<30; i++) {
		dec += (int)pow((double)2, (double)i) * (int)byrev[i];
	}
	printf("%d", dec);
}