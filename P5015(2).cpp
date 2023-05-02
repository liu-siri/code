#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void fun(int type,char* s,int q);
void add(char* s,char* str);
void dele(char* s,int a,int b);
void cat(char*s ,char*str,int begin);
int sub(char* s);
int main()
{
	char s[1000]={0};
	int i=0,type=0,q=0,len=0;
	scanf("%d\n",&q);
	scanf("%s\n",s);
	for(i=0;i<q;i++)
	{
		scanf("%d ",&type);
		fun(type,s,q);
		getchar();
	}
	return 0;
}
void fun(int type,char* s,int q)
{
	int a=0,b=0,i0=0,ans=0;
	char str[1000]={0};
	switch(type)
	{
		case 1:
		{
			scanf("%s",str);
			add(s,str);
			printf("%s",s);
			break;
		}
		case 2:
		{
			scanf("%d %d",&a,&b);
			dele(s,a,b);
			printf("%s",s);
			break;
		}
		case 3:
		{
			scanf("%d %s",&a,&str);
			cat(s,str,a);
			printf("%s",s);
			break;
		}
		case 4:
		{
			ans=sub(s);
			printf("%d",ans);
		}
	}
	if(i0!=q-1)
	{
		printf("\n");
	}
}
void add(char* s,char* str)
{
	strcat(s,str);
}
void dele(char* s,int a,int b)
{
	char tem[1000]={0};
	int j=0;
	for(j=0;j<=b-1;j++)
	{
		tem[j]=s[a+j];
	}
	tem[j]='\0';
	strcpy(s,tem);
}
void cat(char*s ,char*str,int begin)
{
	char tem[1000]={0};
	int i=0;
	for(i=begin;s[i]!='\0';tem[i-begin]=s[i],s[i]=0,i++);
	strcat(s,str);
	strcat(s,tem);
}
int sub(char* s)
{
	int i=0,j=0,copy=0,flag=0;
	char str[1000]={0};
	scanf("%s",str);
	for(i=0;s[i]!='\0';i++)
	{
		copy=i;
		while(str[j]==s[i]&&str[j]!='\0'&&s[i]!='\0')
		{
			flag=1;
			j++;
			i++;
		}
		if(str[j]=='\0'&&flag==1)
		{
			return copy;
		}
		i=copy;
		j=0;
		flag=0;
	}
	return -1;
}
