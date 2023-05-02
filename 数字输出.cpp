#include<stdio.h>
int main()
{
	int i=0,j=0,n=0,n1=0,n2=0,count1=0,num=0;
	scanf("%d",&n);
	n1=n,n2=n;
	for(count1=0;(n1/10!=0)||(n1%10!=0);n1/=10,count1++)
	{
		
	}
	for(i=count1;i>1;i--)
	{
		n2=n;
		for(j=i;j>1;j--)
		{
			n2/=10;
		}
		num=n2%10;
		printf("%d ",num);
	}
		n2=n;
		num=n2%10;
		printf("%d\n",num);
	return 0;
}
