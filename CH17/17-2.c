#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct profile {
	char name[20];
	int age;
	double height;
	char *intro;
};

int main(void) {
	struct profile yuni;

	strcpy(yuni.name, "������");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char *)malloc(80);
	printf("�ڱ� �Ұ�: ");
	gets(yuni.intro);

	printf("�̸� : %s\n", yuni.name);
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);

	printf("����ü�� ũ��: %d\n", sizeof(yuni));
	printf("char[20] ����� ũ��: %d\n", sizeof(yuni.name));
	printf("���� ����� ũ��: %d\n", sizeof(yuni.age));
	printf("�Ǽ� ����� ũ��: %d\n", sizeof(yuni.height));
	printf("char* ����� ũ��: %d\n", sizeof(yuni.intro));
	free(yuni.intro);

	return 0;

}