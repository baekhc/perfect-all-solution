#include <stdio.h>

int main(void)
{
	const double RATE = 0.03;
	int deposit = 800000;

	printf("������: %f\n", RATE);
	printf("���� �ܰ�: %f\n", deposit);
	printf("���ھ�: %f\n", deposit * RATE);

	char* str = "���� c ��� �Թ���";
	char* const title = "������ c ���";

	str = "�ֱ� ���� ���� c ��� �Թ���";

	printf("\n%s: %s\n", str, title);

	return 0;
}