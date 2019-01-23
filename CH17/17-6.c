#include <stdio.h>


struct children {
	unsigned int son : 2;
	unsigned int daughter : 2;
	unsigned int pet : 2;

};

int main(void) {

	struct children my = { 1,2,3 };
	int sum;

	printf("struct children의 크기 : %d바이트\n", sizeof(my));
	sum = my.son + my.daughter + my.pet;
	printf("자식 수 : %d\n", sum);

	return 0;

}