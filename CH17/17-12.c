#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER}; //������

int main(void) {

	enum season ss;
	char *pc;

	ss = WINTER;
	switch (ss)
	{
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "swimming";
		break;
	case FALL:
		pc = "trip";
		break;
	case WINTER:
		pc = "sking";
		break;
	}
	printf("���� ���� Ȱ�� => %s\n", pc);

	return 0;
}