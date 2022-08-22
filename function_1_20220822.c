#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 is_leapyear(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
		return 1;
	else
		return 0;

}
int main()
{
	int year = 0;
	scanf("%d", &year);
	is_leapyear(year);
	if (1 == is_leapyear(year))
		printf("%d年是闰年",year);
	else
		printf("%d年不是闰年",year);

	return 0;
}