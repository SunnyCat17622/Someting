#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>
int Biger(int a, int b)
{
	return a > b ? a : b;
}
int main(void)
{
	int a = 0 ;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d\n",Biger(a, b));
	return 0;
}