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

	//strcpy(s1.name, "ȫ�浿");
	s1.num = 2;
	s1.grade = 2.7;
	//printf("�̸�: %s\n", s1.name);
	printf("�й�: %d\n", s1.num);
	printf("����: %.1lf\n", s1.grade);
	printf("����ü�� ũ��: %d\n", sizeof(s1));
	printf("���� ����� ũ��: %d\n", sizeof(s1.num));
	printf("�Ǽ� ����� ũ��: %d\n", sizeof(s1.grade));
	//printf("char ����� ũ��: %d\n", sizeof(s1.name));

	return 0;
}