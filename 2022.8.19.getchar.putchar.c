#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() 
{
	int n=0;
	scanf("%d", &n);
	switch (n)
	{
	default://default��switch���ǰ������ϰ��
		printf("��������ȷ��ʽ");
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("�����ǹ�����");
		break;
	case 6:
	case 7:
		printf("��������Ϣ��");
		break;
	}

}