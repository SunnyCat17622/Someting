#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int l, r,rol;
	for (rol = 1; rol <= 9; rol++)
	{
		for (l = 1; l <= rol; l++)
		{
			printf("%d x %d\t", l, rol);
		}
		printf("\n");
	}
	return 0;
}