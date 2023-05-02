#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[10000][12]={0};
	int counter=0;
	gets(s[counter]);
	while(s[counter][0]!='.')
	{
		counter++;
		gets(s[counter]);
	}
	if(counter>=14)
	{
		printf("%s and %s are inviting you to dinner...",s[1],s[13]);
	}
	else if(counter>=2)
	{
		printf("%s is the only one for you...",s[1]);
	}
	else
	{
		printf("Momo... No one is for you ...");
	}
	return 0;
}
