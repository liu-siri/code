#include<stdio.h>
int main()
{
	int N=0,i=0,i1=0,M=0,late=0,j=0,j1=0,num=0;
	char ch=0;
	int test[]={0};
	int trial[]={0};
	int seat[]={0};
	N=1;
	for(i=0;i<N;i++)
	{
		for(i1=3*i;i1<=3*i+2;i1++)
		{
			scanf("%c",&ch);
			num=ch-'0';
			test[i1]=num;
		}	
		scanf("%d",&trial[i]);
		scanf("%d",&seat[i]);
	}
	for(i=0;i<N;i++)
	{
		for(i1=3*i;i1<=3*i+2;i1++)
		{
			printf("%d",test[i1]);
		}
		printf(" ");	
		printf("%d ",trial[i]);
		printf("%d ",seat[i]);
		printf("\n");
	}
	return 0;
}
