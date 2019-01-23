#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[20];

};

void print_list(struct address *lp) {
	int i;

	for (i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s\n",
			//lp[i].name, lp[i].age, lp[i].tel, lp[i].addr); //배열 표현
			//(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr); //연산자 사용
			(*(lp + i)).name, (*(lp + i)).age, (*(lp + i)).tel, (*(lp + i)).addr); //포인터 표현
	}

}

int main(void) {
	struct address list[5] =
	{
		{"홍길동", 23, "111-1111", "전라남도 나주"},
		{"이순신", 35, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};

	print_list(list);
	return 0;
}