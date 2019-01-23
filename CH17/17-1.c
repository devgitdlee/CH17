#include <stdio.h>
#include <string.h>

struct  student
{
	//char name[30];
	int num;
	double grade;

};

int main(void) {
	struct student s1;

	//strcpy(s1.name, "홍길동");
	s1.num = 2;
	s1.grade = 2.7;
	//printf("이름: %s\n", s1.name);
	printf("학번: %d\n", s1.num);
	printf("학점: %.1lf\n", s1.grade);
	printf("구조체의 크기: %d\n", sizeof(s1));
	printf("정수 멤버의 크기: %d\n", sizeof(s1.num));
	printf("실수 멤버의 크기: %d\n", sizeof(s1.grade));
	//printf("char 멤버의 크기: %d\n", sizeof(s1.name));

	return 0;
}