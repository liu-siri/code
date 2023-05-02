#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[10]={0};
	int i=0,N=0;
	scanf("%d\n",&N);
	gets(s);i++;
	while(s[0]!='E')
	{
		if(i==N)
		{
			i=0;
			printf("%s",s);
		}
		else 
		{
			if(s[0]=='B')
			{
				printf("JianDao\n");
			}
			else if(s[0]=='J')
			{
				printf("ChuiZi\n");
			}
			else if(s[0]=='C')
			{
				printf("Bu\n");
			}
			i++;
		}
		gets(s);
	}
	return 0;
}
