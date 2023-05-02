#include<stdio.h>
int main()
{
	int n=0,div=0,x=0,k=0,flag=0;
	scanf("%d",&n);
	div=n/(7*52);
	for(k=1;flag==0;k++)
	{
		for(x=100;x>=1&&flag==0;x--)
		{
			if(x+3*k==div)
			{
				flag=1;
			}
		}
		x++;	
	}
	k--;
	printf("%d\n%d",x,k);
}
