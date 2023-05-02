#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void change(char* s1,char* s2,int ans[]);
int val(char* s2,int ans[]);
int main()
{
	char s[300]={0};
	int ans[3]={0};
	int i=0;
	gets(s);
	while(s[i]!='\0')
	{
		change(&s[i],&s[i+3],ans);
		i+=5;
	}
	for(i=0;i<3;i++)
	{
		printf("%d ",ans[i]);
	}
}
void change(char* s1,char* s2,int ans[])
{
	if(*s1=='a')
	{
		ans[0]=val(s2,ans);
	}
	else if(*s1=='b')
	{
		ans[1]=val(s2,ans);
	}
	else if(*s1=='c')
	{
		ans[2]=val(s2,ans);
	}
}
int val(char* s2,int ans[])
{
	if(*s2=='a')
	{
		return ans[0];
	}
	else if(*s2=='b')
	{
		return ans[1];
	}
	else if(*s2=='c')
	{
		return ans[2];
	}
	else 
	{
		return *s2-'0';
	}
}
