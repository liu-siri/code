#include<stdio.h>
#include<string.h>
int count(int N,int M,char s[][1000]);
int main()
{
	char s[50][1000]={0};
	int M,i,N=0,ans;
	scanf("%d %d",&N,&M);
	getchar();
	for(i=1;i<=N;i++)
	{
		gets(s[i]);
	}
	ans=count(N,M,s);
	if(ans<=N)
	{
		printf("%s",s[ans]);
	}
	else
	{
		printf("Wo AK le");
	}
}
int count(int N,int M,char s[][1000])
{
	int i=1,num=0;
	while(num<M&&i<=N)
	{
		if(strstr(s[i],"qiandao")||strstr(s[i],"easy"))
		{
			i++;continue;
		}
		else
		{
			i++;num++;
		}
	}
	return i;
}
