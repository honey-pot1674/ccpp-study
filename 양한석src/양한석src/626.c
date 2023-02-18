#include <stdio.h>
# define SWAP(a,b) tmp = a; a = b; b = tmp

int calculate(int num1, int num2) {
	int sum = 0, tmp, i;
	if (num1 > num2) {
		SWAP(num1, num2);
	}
	for (i = num1; i <= num2; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d", calculate(num1, num2));
	return 0;
}