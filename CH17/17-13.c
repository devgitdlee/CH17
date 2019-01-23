#include <stdio.h>

struct student {
	int num;
	double grade;
};

typedef struct student Stu;
void print_data(Stu *ps) {
	printf("학번 : %d\n", ps->num);
	printf("학점 : %.1lf\n", ps->grade);
}


int main(void) {
	Stu s1 = { 315, 4.2 };

	print_data(&s1);

	return 0;
}