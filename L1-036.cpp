#include<stdio.h>
#include<string.h>
int main()
{
	char test[1000]={0};
	char ans[15][100]={0};
	int len=0,r=0,N=0,i=0,j=0,k=0;
	scanf("%d\n",&N);
	gets(test);
	len=strlen(test);
	if(len%N==0)
	{
		r=len/N;
	}
	else
	{
		r=len/N+1;
	}
	for(i=r;i>=1&&test[k]!='\0';i--)
	{
		for(j=1;j<=N&&test[k]!='\0';j++)
		{
			ans[j][i]=test[k];
			k++;
		}	
	}
	ans[j][i+1]=' ';
	for(i=1;i<=N;i++)
	{
		for(j=1;j<=r;j++)
		{
			printf("%c",ans[i][j]);
		}
		if(i!=N)
		{
				printf("\n");
		}
	}
	return 0;
}
