#include<stdio.h>
#include<string.h>
int judger(char s[],int j);
void change(char s[],int j);
int main()
{
	char s[10000]={0};
	int N=0,i=0,j=0,flag=1,ans1=0,ans2=0;
	scanf("%d",&N);
	getchar();
	for(i=0;i<N;i++)
	{
		flag=1,ans1=0,ans2=0,j=0;
		gets(s);
		while(s[j]!='\0'&&flag==1)
		{
			if(s[j]==',')
			{
				ans1=judger(s,j);
				if(ans1==0)
				{
					flag=0;
					printf("Skipped\n");
				}
			}
			if(s[j]=='.')
			{
				ans2=judger(s,j);
				if(ans2==0)
				{
					printf("Skipped\n");
				}
			}
			if(ans1==1&&ans2==1)
			{
				change(s,j);
				printf("%s\n",s);
				flag=0;
			}
			j++;
		}
	}
	return 0;
}
int judger(char s[],int j)
{
	if(s[j-1]=='g'&&s[j-2]=='n'&&s[j-3]=='o')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void change(char s[],int j)
{
	char tar[30]={"qiao ben zhong."};
	char tem[10000]={0};
	int k=j,counter=0,flag=0;
	for(k=j;k>=0&&flag==0;k--)
	{
		if(s[k]==' ')
		{
			counter++;
			if(counter==3)
			{
				flag=1;
			}
		}
	}
	for(j=0;j<=k+1;j++)
	{
		tem[j]=s[j];
	}
	strcat(tem,tar);
	j=0;
	while(tem[j]!='\0')
	{
		s[j]=tem[j];
		j++;
	}
	s[j]='\0';
}
