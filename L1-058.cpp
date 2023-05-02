#include<stdio.h>
#include<string.h>
int count(char s[],int i,int* p);
void change1(char s[],int i,int * p,int num);
void change2(char s[],int i,int *p,int num);
int main()
{
	char s[1200]={0};
	gets(s);
	int i=0,num=0;
	int end=0,*p=&end;
	while(s[i]!='\0')
	{
		num=count(s,i,p);
		if(num>0&&num<=3)
		{
			i=end;
		}
		else if(num>=4&&num<=9)
		{
			change1(s,i,p,num);i=end;
		}
		else if(num>9)
		{
			change2(s,i,p,num);i=end;
		}
		i++;
	}
	printf("%s",s);
	return 0;
}
int count(char s[],int i,int* p)
{
	int word=1,num=0;
	while(word)
	{
		if(s[i]!='6'&&num==0)
		{
			return 0;
		}
		else if(s[i]!='6'&&num!=0)
		{
			word=0;
			(*p)=i-1;
			return num;
		}
		else if(s[i]=='6')
		{
			i++;num++;
		}
	}
}
void change1(char s[],int i,int * p,int num)
{
	s[i]='9';
	int len=strlen(s),j=0;
	for(j=i+1;j<=len-1;j++)
	{
		s[j]=s[num+j-1];
	}
	s[len-num+1]='\0';
	(*p)=i;
}
void change2(char s[],int i,int *p,int num)
{
	s[i]='2';s[i+1]='7';
	int len=strlen(s),j=0;
	for(j=i+2;j<=len-1;j++)
	{
		s[j]=s[num+j-1];
	}
	s[len-num+2]='\0';
	(*p)=i+1;
}
