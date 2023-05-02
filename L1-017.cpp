#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[60]={0};
	int len=0,i=0,num=0,len1=0;
	double rank=0;
	gets(s);
	len1=strlen(s);
	if(s[0]=='-')
	{
		len=len1-1;
	}
	else
	{
		len=len1;
	}
	for(i=0;i<len1;i++)
	{
		if(s[i]=='2')
		{
			num++;
		}
	}
	rank=num*1.0/len;
	if(s[0]=='-')
	{
		rank*=1.5;
	}
	if((s[len1-1]-'0')%2==0)
	{
		rank*=2;
	}
	if(rank>1)
	{
		rank=1;
	}
	printf("%.2lf%%",100*rank);
	return 0;
}
