#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	char ori[100][100]={0};
	char transer[100][100]={0};
	int n=0,m=0,i=0,j=0;
	scanf("%d",&n);
	getchar();
	m=(int)pow(2.0,(double)(n+1));
	n=(int)pow(2.0,(double)n);
	for(int i=1;i<=n;i++)
	{
		gets(ori[i]);
	}
	for(i=1;i<=n;i++)
	{
		for( j=0;j<=m-1;j++)
		{
			if(ori[i][j]==' ')
			{
				transer[i][j]=0;
			}
			else if(ori[i][j]=='/')
			{
				transer[i][j]='a';
			}
			else if(ori[i][j]=='\\')
			{
				transer[i][j]='b';
			}
			else if (ori[i][j]=='_')
			{
				transer[i][j]='c';
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			printf("%c",transer[i][j]);
		}
		printf("\n");
	}
}
