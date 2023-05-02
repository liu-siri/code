#include<stdio.h>
int main()
{
	int arr[]={0,1,2,3,4,5,6,7};
	printf("%p\n",arr);
	printf("%p",&arr[0]);
	return 0;
}
