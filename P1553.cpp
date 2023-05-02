#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* funzheng(char *s);
void funper(char* s,int i);
void funmid(char*s ,int i);
void xiaoshu(char* s2);
int main()
{
	char s[1000]={0};
	int i=0,len=0,flag=0;
	char* p=0;
	gets(s);
	len=strlen(s);
	for(i=0;i<=len-1&&flag==0;i++)
	{
		if(s[i]=='%')
		{
			funper(s,i);
			flag=1;
		}
		else if(s[i]=='/'||s[i]=='.')
		{
			funmid(s,i);
			flag=1;
		}
	}
	if(i==len&&flag==0)
	{
		p=funzheng(s);
		printf("%s",p);
	}
	return 0;
}
char* funzheng(char *s)
{
	int j=0,len=0,t=0;
	len=strlen(s);
	for(j=0;j<=(len-1)/2;j++)
	{
		t=s[j];
		s[j]=s[len-1-j];
		s[len-1-j]=t;
	}
	for(j=0;j<=len-1&&s[j]=='0';j++);
	return &s[j];
}
void funmid(char* s,int i)
{
	char s1[1000]={0};
	char s2[1000]={0};
	char*p1=0,*p2=0;
	int checker=0,j=0;
	strncpy(s1,s,i);
	strcpy(s2,&s[i+1]);
	for(j=0;j<=strlen(s2)-1&&checker==0;j++)
	{
		if(s2[j]!='0')
		{
			checker=1;
		}
	}
	p1=funzheng(s1);
	if(s[i]=='.')
	{
		xiaoshu(s2);
	}
	else
	{
		p2=funzheng(s2);
	}
	if(s[i]=='/')
	{
		if(s1[0]=='0')
		{
			printf("0");
		}
		else
		{
			printf("%s/%s",p1,p2);
		}
	}
	else if(s[i]=='.')
	{
		if(s[0]=='0'&&s2[0]=='\0')
		{
			printf("0.0");
		}
		else if(checker==0)
		{
			printf("%s.0",p1);
		}
		else if(s[0]=='0')
		{
			printf("0.%s",s2);
		}
		else
		{
			printf("%s.%s",p1,s2);
		}	
	}
}
void funper(char*s,int i)
{
	s[i]=0;
	char*p=0;
	p=funzheng(s);
	if(s[0]=='0')
	{
		printf("0");
	}
	else
	{
		printf("%s%%",p);
	}
}
void xiaoshu(char* s2)
{
	int j=0,len=0,t=0,k=0,found=0,tem=0;
	len=strlen(s2);
	for(j=0;j<=(len-1)/2;j++)
	{
		t=s2[j];
		s2[j]=s2[len-1-j];
		s2[len-1-j]=t;
	}
	tem=len;
	for(j=0;j<=len-1&&tem==len;j++)
	{
		found=0;
		if(s2[j]=='0')
		{
			for(k=j;k<=len-1&&found==0;k++)
			{
				if(s2[k]!='0')
				{
					found=1;
				}
			}
			if(found==0)
			{
				tem=j;
			}
		}
	}
	s2[tem]='\0';
}
