#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void Switch(int *a, int *b)
{
	int m = 0;
	m = *a;
	*a = *b;
	*b = m;
}
int main(void)
{
	int a = 1;
	int b = 2;
	printf("交换前 a = %d, b = %d\n", a, b);
	Switch(&a, &b);
	printf("交换后 a = %d, b = %d\n", a, b);
	return 0;
}
