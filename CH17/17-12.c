#include <stdio.h>

enum season {SPRING, SUMMER, FALL, WINTER}; //열거형

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
	printf("나의 레저 활동 => %s\n", pc);

	return 0;
}