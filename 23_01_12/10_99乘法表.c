#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
void Table(int max)
{
	//ÿһ�п�ͷ������
	int first = 1;
	//ÿһ��ĩβ������
	int last = 1;
	for (last = 1; last <= max; last++)
	{
		for (first = 1; first <= last; first++)
			printf("%d X %d = %d\t", first, last,first*last);
		printf("\n");
	}
}
int main(void)
{
	//�������
	int max = 0;
	printf("��ָ��������������");
	scanf("%d", &max);
	Table(max);
	return 0;
}
