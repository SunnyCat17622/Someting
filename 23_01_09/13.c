#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ӡ100-200֮�������
int main(void)
{
	int n = 100;
	for (; n <= 200; n++)
		if (Judge(n))
			printf("%d\n", n);
	return 0;
}
int Judge(int n)
{
	int i = 2;
	for (; i < n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}
