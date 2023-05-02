#include<stdio.h>
int main()
{
	int A=0,B=0,i=0,ans=0;
	scanf("%d %d",&A,&B);
	while(!(A==0&&B==0))
	{
		ans=A;
		for(i=0;i<B-1;i++)
		{
			ans=ans*A%1000;
		}
		printf("%d\n",ans);
		scanf("%d %d",&A,&B);
	}
	return 0;
}
