#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
	
}
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	print(a);
	return 0;
}