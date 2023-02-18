#include <stdio.h>
int main() {
	FILE* input;
	FILE* output;
	input = fopen("207input.txt", "rt");
	output = fopen("207output.txt", "wt");
	int n, m;
	char a;

	if (input == NULL) {
		printf("file not found");
	}

	fscanf(input,"%d %d %c", &n, &m, &a);
	if (a == '+') {
		fprintf(output, "%d + %d = %d", n, m, n + m);
	}
	if (a == '-') {
		fprintf(output, "%d - %d = %d", n, m, n - m);
	}
	if (a == '*') {
		fprintf(output, "%d * %d = %d", n, m, n * m);
	}
	if (a == '/') {
		fprintf(output, "%d / %d = %d", n, m, n / m);
	}
	if (a == '%') {
		fprintf(output, "%d %% %d = %d", n, m, n % m);
	}
}