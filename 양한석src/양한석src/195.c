#include <stdio.h>

struct Information {
	char name[100];
	char tel[100];
	char addr[100];
};

int main() {
	struct Information i;
	scanf("%s %s %s", i.name, i.tel, i.addr);
	printf("name : %s\n", i.name);
	printf("tel : %s\n", i.tel);
	printf("addr : %s", i.addr);
}