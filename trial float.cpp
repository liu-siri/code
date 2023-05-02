#include<stdio.h>
#include<string.h>
int main()
{
	int a=9;
	float*p =(float*)&a;
	printf("%d",a);
	printf("%f",*p);
}
