#include<stdio.h>
int a=0,b=0,x=0,y=0,c=0,sum=0,num=0;
int solution(int,int ,int);
int main()
{
	scanf("%d%d%d",&a,&b,&c);
	num=solution(a,b,c);
	printf("%d",num);
	return 0;
}
int solution(int a,int b,int c)
{
	for(y=0;y<=c*1.0/b;y++)
	{
		for(x=0;x<=c*1.0/a;x++)
		{
			if(a*x+b*y==c)
			{
				sum++;
			}
		}
	}
	return sum;
}
