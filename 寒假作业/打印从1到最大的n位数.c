#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int* printNumbers(int n, int* returnSize) {
    //pow是指数运算函数
    //*returnSize = pow(10, n) - 1;
    //指数运算也可以用一下代码实现
    int i = 0;
    for (i = 1, *returnSize = 1; i <= n; i++)
        *returnSize *= 10;
    *returnSize -= 1;
    static int arr[10000000] = { 0 };
    for (i = 0; i < *returnSize; i++)
        arr[i] = i + 1;
    return arr;
}
int main(void)
{
    int a = 0;
    int i = 0;
    int *returnSize = &a;
    int *arr1 = printNumbers(1, returnSize);
    for (i = 0; i < *returnSize; i++)
        printf("%d\t", *(arr1 + i));
    return 0;
}
