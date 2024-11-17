#include <stdio.h>

int main() {
	int score = 0;
	printf("请输入分数");
	scanf("%d", &score);
	printf("您输入的分数为：%d", score);
	if (score > 500)
		printf("    一本");
	else if (score > 400)
		printf("     二本");
	else
		printf("    三本");
}

