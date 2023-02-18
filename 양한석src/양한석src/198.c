#include <stdio.h>
#include <math.h>

struct Information {
	double h;
	double w;
};

int main() {
	struct Information i[2];
	scanf("%lf %lf", &i[0].h, &i[0].w);
	scanf("%lf %lf", &i[1].h, &i[1].w);
	printf("height : %.0lfcm\n", floor((i[0].h + i[1].h) / 2 + 5));
	printf("weight : %.1lfkg", (i[0].w + i[1].w) / 2 - 4.5);
}