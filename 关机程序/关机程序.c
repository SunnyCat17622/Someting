#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(void)
{
	char t[] = "hello,world";
	printf("你的电脑将在5分钟内关机。\n");
	Sleep(3000);
	system("shutdown -s -t 300");
	while (1)
	{
		printf("输入：hello,world 以取消关机\n");
		printf("请输入：");
		scanf("%s", t);
		if (strcmp(t, "hello,world") == 0)
		{
			system("shutdown -a");
			break;
		}
		else 
			printf("输入错误");
	}
	return 0;
}
