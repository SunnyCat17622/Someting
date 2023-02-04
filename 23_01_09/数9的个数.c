#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//数9的个数,1-100
int main(void)
{
	int i = 1;
	int n = 1;
	for (i = 1, n = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			n++;
		if ((i / 10) % 10 == 9)
			n++;
	}
	printf("%d\n", n);
	return 0;
}