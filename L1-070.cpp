#include<stdio.h>
#include <string.h>
int checker(char s[120]);
int main()
{
	int first=0,excite=0,k=0;
	char s[120][120]={0};
	char end[2]={'.'};
	gets(s[k]);k++;
	while(strcmp(s[k-1],end))
	{
		if(checker(s[k-1]))
		{
			if(excite==0)
			{
				first=k;
			}
			excite++;
		}
		gets(s[k]);k++;
	}
	if(excite!=0)
	{
		printf("%d\n%d %d\n",k-1,first,excite);
	}
	else
	{
		printf("%d\n-_-#\n",k-1);
	}
	return 0;
}
int checker(char s[120])
{
	if(strstr(s,"chi1 huo3 guo1"))
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
