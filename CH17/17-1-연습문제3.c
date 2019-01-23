#include <stdio.h>
#include <string.h>

struct profile {
	int num;
	char name[20];
	char *skill;
};

struct sports {
	char *event;
	struct profile player

};

int main(void){
	struct sports a;

	strcpy(a.event, "figure skating");
	a.player.name = "Yuni Seo";
	scanf("%s", a.player.skill);

	return 0;
}