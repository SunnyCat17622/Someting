#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main(void)
{
	int ar[] = { 0,1,2,3,4,5,6,7,8,9,10,11};
	int n_p = 0;
	int i = 0;
	int l = 0;
	int r = sizeof(ar)/sizeof(ar[0]);
	while (1)
	{
		l = 0; 
		r = sizeof(ar) / sizeof(ar[0]);
		scanf("%d", &n_p);
		for (i = (l + r) / 2; l < r - 1 && ar[i] != n_p; i = (l + r) / 2)
		{
			if (ar[i] > n_p)
				r = i;
			else if (ar[i] < n_p)
				l = i;
		}
		if (ar[i] == n_p)
			printf("找到了，下标是%d\n", i);
		else
			printf("找不到\n");
	}
	return 0;
}