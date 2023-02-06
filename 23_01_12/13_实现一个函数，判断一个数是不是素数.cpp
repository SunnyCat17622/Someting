#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Judge(int n)
{
	int divisor = 0;
	for (divisor = 2; divisor < n; divisor++)
	{
		if (n % divisor == 0)
			return 1;
	}
	return 0;
}
int main(void)
{
	int n = 0;
	printf("100~200之间的素数有：");
	for (n = 100; n <= 200; n++)
	{
		if (Judge(n) == 1)
			printf("%d ",n);
	}
	return 0;
}
