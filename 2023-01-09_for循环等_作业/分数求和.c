#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//分数求和
int main(void)
{
	int de = 1;
	float sum = 0;
	float i = 1.0;
	for (de = 1; de <= 100; de++,i *= -1)
	{
		sum += i / de;
	}
	printf("%f\n", sum);
	return 0;
}