#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3]={0};
	printf("%d %p",(&a+1),&a);
}
