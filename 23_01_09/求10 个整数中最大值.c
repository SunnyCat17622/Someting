#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求10 个整数中最大值
int main(void)
{
	int ar[10];
	int i = 0;
	int k = 0;
	for (i = 0; i < 10; i++)
		scanf("%d", &ar[i]);
	for (i = 0; i < 10; i++)
	{
		if (k < ar[i])
			k = ar[i];
	}
	printf("%d\n", k);
	return 0;
}