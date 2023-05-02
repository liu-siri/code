#include<stdio.h>
int main()
{
	int ch_1;
	while((ch_1=getchar())!=EOF)
		{
			if(ch_1<'1'||ch_1>'9')
			{
				continue;
			}
			putchar(ch_1);
		}
	return 0;
 } 
