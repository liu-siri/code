#include<stdio.h>
#include<stdlib.h>
int cmp(const void*e1,const void* e2)
{
	return *(int*)e1<*(int*)e2;
}
int main()
{
	int a[10]={0};
	int i=0;
	for(i=0;i<=9;i++)
		a[i]=i;
	qsort(a,10,sizeof(int),cmp);
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
}
