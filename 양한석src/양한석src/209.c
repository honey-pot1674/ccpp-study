#include <stdio.h>
int main() {
	FILE* in;
	FILE* out;
	int grp[1000] = { 0 }, n = 0, scan;

	in = fopen("209input.txt", "rt");
	out = fopen("209output.txt", "wt");

	if (in == NULL) {
		printf("file '209input.txt' not found");
	}
	else {
		for (int i = 0; i < 1000; i++) {
			fscanf(in," %d", &scan);
			if (scan == 0) {
				break;
			}
			if (scan % 3 == 0 && scan % 5 == 0) {
				grp[i] = scan;
				n++;
			}
		}

		for (int i = 0; i < 1000; i++) {
			if (grp[i] != 0) {
				fprintf(out,"%d ", grp[i]);
			}
		}
		if (n == 0) {
			fprintf(out,"0");
		}
		else {
			fprintf(out,"\n%d", n);
		}
	}
}