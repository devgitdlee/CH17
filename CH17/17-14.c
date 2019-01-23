#include <stdio.h>

typedef union {
	int ea;
	double kg;
	double liter;
}Unit;

typedef struct {
	char name[20];
	enum { EGG = 1, MILK, MEAT}kind;
	Unit amount;
}Gift;

void print_list(Gift a) {
	printf("이름 : %s, 선택 품목 : ", a.name);

	switch (a.kind) {
	case EGG: printf("계란 %d\n", a.amount.ea); break;
	case MILK: printf("우유 %.1lf리터\n", a.amount.liter); break;
	case MEAT: printf("계란 %.1lfkg\n", a.amount.kg); break;
	}
}

int main(void) {
	Gift list[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("이름 입력: ");
		scanf("%s", list[i].name);
		printf("품목 선택(1.계란,2.우유,3.고기) : ");
		scanf("%d", &list[i].kind);

		switch (list[i].kind) 
		{
			case EGG: list[i].amount.ea = 30; break;
			case MILK: list[i].amount.liter = 4.5; break;
			case MEAT: list[i].amount.kg = 0.6; break;
		}

	}

	printf("# 세 번째 경품 당첨자...\n");
	print_list(list[2]);

	return 0;
}