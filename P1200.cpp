#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cal(char string[]);
int main()
{
	int ans1=0,ans2=0;
	char string1[10]={0};
	char string2[10]={0};
	gets(string1);
	gets(string2);
	ans1=cal(string1);
	ans2=cal(string2);
	if(ans1==ans2)
	{
		printf("GO");
	}
	else
	{
		printf("STAY");
	}
}
int cal(char string[])
{
	int sz=strlen(string);
	int i=0,ans=1;
	for(i=0;i<sz;i++)
	{
		ans*=(string[i]-'A'+1);
	}
	return ans%47;
}
