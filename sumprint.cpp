#include<stdio.h>
int main()
{
	int A=0,B=0,i=0,sum=0,num=0;
	scanf("%d %d",&A,&B);
	for(i=A;i<=B;i++)
	{
		printf("%5d",i);
		sum+=i;
		num++;
		if(num%5==0)
		{
			printf("\n");
		}
	}
	if(num%5!=0)
	{
			printf("\n");
	}
	printf("Sum=%d",sum);
	return 0;
}
