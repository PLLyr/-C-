#include<stdio.h>
int binary_search(int arr[],int k,int sz)
{
	int left = 0;
	int right = sz-1;
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (arr[mid] < k)
				left++;
			else if (arr[mid] > k)
				right++;
			else
				return mid;
		}
		return -1;

}
int main()
{
	int k = 17;
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };//�����ö��Ÿ�����ע���ж����ַ����黹����������
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret=binary_search(arr,k,sz);
	if(ret==-1)
		printf("�Ҳ�������");
	else
		printf("�ҵ��ˣ��±���%d", ret);
	return 0;
}
