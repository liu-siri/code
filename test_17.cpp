#include<stdio.h>
int main()
{
	int i=0;
	int num=0;
		int j=0;  
	for(i=0,j=0 ;1;i++,j++)
	{
		j++;
		num++;
	/*
		for(;j<10;j++)
		{
			printf("hehe\n");
			num++;
		}
		*/
	}
	printf("num=%d i=%d j=%d",num,i,j);
	return 0;
}
