#include <stdio.h>
#include <string.h>

struct student {
	int num;
	char name[20];
	int sorce[5];
	double avg;
};
//
//struct student print_avg(struct student s1)
//{
//	int i, sum = 0;
//	for (i = 0; i < 5; i++) {
//		sum += s1.sorce[i];
//	}
//
//	s1.avg = (double) sum / 5;
//
//	return s1;
//};
//
//int main(void) {
//	struct student s1;
//	int tot = 0;
//	printf("�й� :");
//	scanf("%d", (&s1.num));
//	printf("�̸� :");
//	scanf("%s", s1.name);
//	printf("���� :");
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", (&s1.sorce[i]));
//		//tot += s1.sorce[i];
//	}
//	//s1.avg = (double)tot / 5;
//	s1 = print_avg(s1);
//
//	printf("��� : %.1lf", s1.avg);
//
//	return 0;
//
//}


struct student print_avg(struct student s1)
{
	int i, sum = 0;
	printf("�й� : %d\n", s1.num);
	printf("�̸� : %s\n", s1.name);
	printf("���� :");
	for (i = 0; i < 5; i++) {
		printf("%5d", s1.sorce[i]);
		sum += s1.sorce[i];
	}
	printf("\n");
	s1.avg = sum / 5.0;

	return s1;
};

int main(void) {
	struct student s1 = { 315, "ȫ�浿",  {82,93,74,90,65}};

	s1 = print_avg(s1);
	printf("��� : %.1lf", s1.avg);

	return 0;

}