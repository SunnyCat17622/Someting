#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "store.h"
int add(int x, int y)
{
	return x + y;
}
void printline()
{
	printf("hello,world!");
}
void printthreeline()
{
	int n = 0;
	for (n = 1; n <= 3; n++)
	{
		printline();
		printf("\n");
	}
}
int main(void)
{
	printthreeline();
	return 0;
}