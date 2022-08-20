#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int n=0;
	scanf("%d", &n);
	switch (n)
	{
	default://default在switch语句前，养成习惯
		printf("请输入正确格式");
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("今天是工作日");
		break;
	case 6:
	case 7:
		printf("今天是休息日");
		break;
	}

}