#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void menu()
{
	printf("-----------------------------\n");
	printf("-------�����ִ�С��Ϸ--------\n");
	printf("--------1.play-0.exit--------\n");//��1����Ϸ����0�˳�
	printf("-----------------------------\n");
	printf("\n");
}
void game()
{
	int a;//�µ�����
	
	int ret = rand()%100+1;//ϵͳ�����
	
	while(1)
	{
		printf("������1-100�����֣�");
		scanf("%d", &a);

		if (a > ret)
		{
			printf("�����\n");
		}
		else if (a < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
	int main()
	{
		int input = 0;
		srand((unsigned int)time(NULL));//����Ҫ�������ʱ��

		do
		{
			menu();
			printf("������0����1:>\n");
			scanf("%d", &input);
		switch (input)
		{

		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:printf("�������������0����1\n");
			break;
		}
	} while (1);//inputΪ0ʱ�˳�����
	return 0;
}
