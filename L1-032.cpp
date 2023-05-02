#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[100000]={0};
	int N=0,i=0,len=0;
	char c=0;
	scanf("%d %c\n",&N,&c);
	gets(s);
	len=strlen(s);
	if(N>len)
	{
		for(i=0;i<N-len;i++)
		{
			printf("%c",c);
		}
		printf("%s",s);
	}
	else
	{
		for(i=len-N;i<=len;i++)
		printf("%c",s[i]);
	}
	return 0;
}
