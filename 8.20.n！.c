#include<stdio.h>
int main()
{
	int n = 3;
	int i = 0;
	int sum = 1;
	for (i = 1; i <= n; i++)
	{
		sum = i * sum;
	};
	printf("nµÄ½×²ãÊÇ%d", sum);
	return 0;
}