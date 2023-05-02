#include<stdio.h>
int main()
{
	char s[120]={0},n[120]={0};
	int i=0;
	while(scanf("%c",&s[i++])!=EOF)
    s[i]='\0';
    i=0;
	while(s[i]!='\0')
	{
		if(s[i]<='z'&&s[i]>='a')
		{
			s[i]=s[i]+'A'-'a';
		}
		n[i]=s[i];
		i++;
	}
	puts(s);
	return 0;
}
