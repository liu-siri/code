#include<stdio.h>
#include<string.h>
int count(int N,int M,char s[][1000],int *p);
int main()
{
	char s[50][1000]={0};
	int M,i,N=0,ans,num=0;
	int *p=&num;
	scanf("%d %d",&N,&M);
	getchar();
	for(i=1;i<=N;i++)
	{
		gets(s[i]);
	}
	ans=count(N,M,s,p);
	if(ans<=N&&num!=0)
	{
		printf("%s",s[ans]);
	}
	else
	{
		printf("Wo AK le");
	}
}
int count(int N,int M,char s[][1000],int*p)
{
	int i=1,num=0,j=0;
	while(num<M&&i<=N)
	{
		if(strstr(s[i],"qiandao")||strstr(s[i],"easy"))
		{
			i++;
		}
		else
		{
			i++;num++;
		}
	}
	if(i!=N+1)
	{
		num=0;j=i;
		while(j<=N)
		{
			if(!strstr(s[j],"qiandao")&&!strstr(s[j],"easy"))
			{
				num++;
			}
			j++;
		}
		(*p)=num;
	}
	return i;
}
