#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("-----------------------------\n");
	printf("-------猜数字大小游戏--------\n");
	printf("--------1.play-0.exit--------\n");//输1玩游戏，输0退出
	printf("-----------------------------\n");
	printf("\n");
}
void game()
{
	int a;//猜的数字
	
	int ret = rand()%100+1;//系统随机数
	
	while(1)
	{
		printf("请输入1-100的数字：");
		scanf("%d", &a);

		if (a > ret)
		{
			printf("输大了\n");
		}
		else if (a < ret)
		{
			printf("输小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
	int main()
	{
		int input = 0;
		srand((unsigned int)time(NULL));//不需要输出具体时间

		do
		{
			menu();
			printf("请输入0或者1:>\n");
			scanf("%d", &input);
		switch (input)
		{

		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:printf("输入错误，请输入0或者1\n");
			break;
		}
	} while (1);//input为0时退出程序
	return 0;
}
