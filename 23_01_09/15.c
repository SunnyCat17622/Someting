#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
////给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20
int main(void)
{
	int i = 1;
	int n = 0;
	for (; i <= 20; i++)
	{
		if (20 % i == 0 && 40 % i == 0)
			n = i;
	}
	printf("%d", n);
	return 0;
}