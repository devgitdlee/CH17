#include <stdio.h>

struct clothes
{
	unsigned char season : 2;
	unsigned char size : 3;
	unsigned char patton : 5;
	unsigned char : 0;
	unsigned char color : 4;
	unsigned char : 2;
	unsigned char style : 3;
	unsigned char type : 2;

}new_arrival;


int main(void) {

	struct clothes c1;

	printf("clother 구조체의 값: %d", c1);

	return 0;
}