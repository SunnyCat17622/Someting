#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ӡ1000~2000֮�������
int main(void)
{
	int n = 1000;
	for (; n <= 2000; n++)
	{
		if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
			printf("%d ", n);
	}
	return 0;
}