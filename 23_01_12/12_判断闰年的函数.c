#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Judge(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}
int main(void)
{
	int year = 0;
	printf("��������ݣ�");
	scanf("%d", &year);
	if (Judge(year))
		printf("�����ꡣ\n");
	else
		printf("�������ꡣ\n");
	return 0;
}
