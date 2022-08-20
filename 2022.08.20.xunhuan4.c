#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = { "welcom to world!!!" };
	char arr2[] = { "##################" };
	int left = 0;
	int right = 0;
	right = strlen(arr2)-1;
	while(left<=right)
	{
	arr2[left] = arr1[left];
	arr2[right] = arr1[right];
	printf("%s\n", arr2);
	Sleep(1000);
	system("cls");
	left++;
	right--;
	}
	printf("%s\n", arr1);
	return 0;
}