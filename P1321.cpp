#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int counter(char *s);
int main()
{
	char s[10000]={0};
	int num=counter(s);
	printf("%d",num);
	return 0;
}
int counter(char *s)
{
	int i=0,n=0;
	int len=strlen(s);
	for(i=0;i<=len;i++)
	{
		if(s[i]=='b')
		{
			if(s[i+1]=='o'&&s[i+2]=='y')
			{
				n++;
				i+=2;
			}
		}
		else if(s[i]=='g')
		{
			if(s[i+1]=='i'&&s[i+2]=='r'&&s[i+3]=='l')
			{
				n++;
				i+=3;
			}
		}
		else if(s[i]=='o'&&s[i+1]=='y')
		{
			n++;
			i+=1;
		}
		else if(s[i]=='y')
		{
			n++;
		}
		else if(s[i]=='i'&&(s[i+1]=='r'&&s[i+2]=='l'))
		{
			i+=2;
			n++;
		}
		else if(s[i]=='r'&&s[i+1]=='l')
		{
			i++;
			n++;
		}
		else if(s[i]=='l')
		{
			n++;
		}
	}
	return n;
}
