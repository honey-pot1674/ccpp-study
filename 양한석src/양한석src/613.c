#include <stdio.h>

typedef struct MyClass {
	char Name[20];
	char School[20];
	int Grade;
}myclass;

int main() {
	myclass a;
	scanf("%s %s %d", a.Name, a.School, &a.Grade);
	printf("Name : %s\n", a.Name);
	printf("School : %s\n", a.School);
	printf("Grade : %d", a.Grade);
}