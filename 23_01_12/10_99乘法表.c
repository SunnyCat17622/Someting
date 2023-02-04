#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
void Table(int max)
{
	//每一行开头的数字
	int first = 1;
	//每一行末尾的数字
	int last = 1;
	for (last = 1; last <= max; last++)
	{
		for (first = 1; first <= last; first++)
			printf("%d X %d = %d\t", first, last,first*last);
		printf("\n");
	}
}
int main(void)
{
	//最大数字
	int max = 0;
	printf("请指定行数和列数：");
	scanf("%d", &max);
	Table(max);
	return 0;
}
