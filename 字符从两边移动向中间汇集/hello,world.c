#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//hello,world!
//************
int main(void)
{
	char ar1[] = "hello,world!";
	char ar2[] = "************";
	int l = 0;
	int r = strlen(ar1) - 1;
	for (l = 0; l <= r; l++,r--)
	{
		ar2[l] = ar1[l];
		ar2[r] = ar1[r];
		//Çå¿ÕÆÁÄ»
		system("cls");
		printf("%s\n", ar2);
		//Ë¯Ãß500ºÁÃë
		Sleep(500);
	}
	return 0;
}