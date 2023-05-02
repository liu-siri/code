#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char name[51][9]={0};
	int sex[51]={0};
	int choose[51]={0};
	int i=0,N=0,j=0,flag=0;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d %s",&sex[i],name[i]);
	}
	for(i=1;i<=N/2;i++)
	{
		flag=0;
		for(j=N;j>i&&flag==0;j--)
		{
			if(sex[i]^sex[j]&&!choose[j])
			{
				choose[j]=1,choose[i]=1;
				printf("%s %s\n",name[i],name[j]);
				flag=1;
			}
		}
	}
	return 0;
}
