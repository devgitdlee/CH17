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

	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char *)malloc(80);
	printf("자기 소개: ");
	gets(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);

	printf("구조체의 크기: %d\n", sizeof(yuni));
	printf("char[20] 멤버의 크기: %d\n", sizeof(yuni.name));
	printf("정수 멤버의 크기: %d\n", sizeof(yuni.age));
	printf("실수 멤버의 크기: %d\n", sizeof(yuni.height));
	printf("char* 멤버의 크기: %d\n", sizeof(yuni.intro));
	free(yuni.intro);

	return 0;

}