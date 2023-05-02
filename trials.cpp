#include<stdio.h>
int s(int*,int*);
int main()
{
	int a[10]={'a','b','c'};
	s(&a[2],&a[3]);
	return 0;
 } 
 int s(int *a,int*b)
 {
 	printf("%p\n",&a);
 	printf("%p",&b);
 }
