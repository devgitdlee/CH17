#include <stdio.h>

struct  cracker
{
	int price;
	int calories;
};

int main(void){
	struct cracker c1;
	printf("�ٻ���� ���ݰ� ������ �Է��ϼ���:");
	scanf("%d%d", (&c1.price), (&c1.calories));

	printf("�ٻ���� ����: %d��\n", c1.price);
	printf("�ٻ���� ����: %dkcal", c1.calories);

	return 0;
}