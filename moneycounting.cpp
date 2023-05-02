#include<stdio.h>
void cal(int* num,int n);
int main()
{
	int val[7]={100,50,20,10,5,2,1};
	int num[7]={0};
	int n=0,i=0;
	scanf("%d",&n);
	cal(num,n);
	for(i=0;i<=6;i++)
	{
		if(i!=0&&num[i]!=0)
		{
			printf("\n");
		}
		if(num[i]!=0)
		{
			printf("%d:%d",val[i],num[i]);
		}
	}
	return 0;
}
void cal(int* num,int n)
{
	num[0]=n/100;
	n-=num[0]*100;
	num[1]=n/50;
	n-=num[1]*50;
	num[2]=n/20;
	n-=num[2]*20;
	num[3]=n/10;
	n-=num[3]*10;
	num[4]=n/5;
	n-=num[4]*5;
	num[5]=n/2;
	n-=num[5]*2;
	num[6]=n%2;
}
