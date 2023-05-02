#include<stdio.h>
int main()
{
	int a[10][10]={0};a[1][2]=10;
	printf("a=%d\n",a);
	printf("a+1=%d\n",a+1);
	printf("*a+1=%d\n",*a+1);
	printf("*(a+1)=%d\n",*(a+1));
	printf("*(*(a+1)+2)=%d",*(*(a+1)+2));
}
