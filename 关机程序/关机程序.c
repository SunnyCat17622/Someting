#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(void)
{
	char t[] = "hello,world";
	printf("��ĵ��Խ���5�����ڹػ���\n");
	Sleep(3000);
	system("shutdown -s -t 300");
	while (1)
	{
		printf("���룺hello,world ��ȡ���ػ�\n");
		printf("�����룺");
		scanf("%s", t);
		if (strcmp(t, "hello,world") == 0)
		{
			system("shutdown -a");
			break;
		}
		else 
			printf("�������");
	}
	return 0;
}
