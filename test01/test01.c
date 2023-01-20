#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
enum SEX
{
    MALE = 10,
    FEMALE,
    SECRET
};
int main() {
    //char str[] = "hello,world!";
    //printf("%d\n", sizeof(str));
    //printf("%d\n", strlen(str));
    //char str2[] = { 'h','e' ,'\0'};
    //char str4[] = { 'h','e' ,0};
    //char str3[4] = { 'h','e' };
    //printf("%s\n", str2);
    //printf("%s\n", str3);
    //printf("%s\n", str4);
    int str5[] = { 1234,56789};
    int le = sizeof(str5)/sizeof(str5[0]);
    for (int i = 0; i < le; i++)
        printf("%d", str5[i]);
    return 0;
}