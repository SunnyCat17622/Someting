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
	printf("����ǰ a = %d, b = %d\n", a, b);
	Switch(&a, &b);
	printf("������ a = %d, b = %d\n", a, b);
	return 0;
}
