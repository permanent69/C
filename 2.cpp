#include <stdio.h>

int main() {
	int score = 0;
	printf("���������");
	scanf("%d", &score);
	printf("������ķ���Ϊ��%d", score);
	if (score > 500)
		printf("    һ��");
	else if (score > 400)
		printf("     ����");
	else
		printf("    ����");
}

