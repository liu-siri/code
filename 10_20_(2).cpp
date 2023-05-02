#include<stdio.h>
int main()
{
	int i=0;
	char ch_1[]={0};
	for(i=0;i<3;i++)
	{
		gets(ch_1);
		printf("%c",ch_1[i]);
	}
	return 0;
}
