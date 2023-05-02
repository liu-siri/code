#include<stdio.h>
int main()
{
	int i=0,j=0,num=0,n=0,x=0;
	scanf("%d %d",&n,&x);
	for(i=1;i<=n;i++)
	{
		while(((i/10!=0)&&i>10)||(i>=1&&i<=9))
		{
			if(i%10==x)
			{
				num++;
			}
			i/=10;
		}
	}
		printf("%d",num);
 } 
