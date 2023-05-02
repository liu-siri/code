#include<stdio.h>
int main()
{
	int n=0,i=0,item1=0,item2=0,item3=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&item1,&item2,&item3);
		sum=item1+item2+item3;
		if(item1>=75&&item2>=75&&item3>=75&&sum>=240)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
	return 0;
}
