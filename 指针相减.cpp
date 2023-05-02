#include<stdio.h>
#include<string.h>
int main()
{
	double arr[12]={0};
	double *p =&arr[0],*q=&arr[9];
	printf("%d\n",p);
	printf("%d",q);
	return 0;
}
