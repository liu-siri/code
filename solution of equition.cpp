#include<stdio.h>
#include<math.h>
double a=0,b=0,judge=0,c=0,x=0,x1=0,x2=0;
int main()
{
	
	void  solution(double a,double b,double c);
	void  special(double a,double b,double c);
	printf("����ax^2+bx+c=0\n");
	printf("������a=");
	scanf("%lf",&a);
	printf("������b=");
	scanf("%lf",&b);
	printf("������c=");
	scanf("%lf",&c);
	judge=b*b-4*a*c;
	if(judge>0)
	{
		solution(a,b,c);
		printf("x1=%lf,x2=%lf",x1,x2);
	}
	if(judge==0)
	{
		special(a,b,c);
		printf("x=%lf",x);
	}
	if(judge<0)
	{
		printf("�������������,x1=(%lf+%lfi)/%lf,x2=(%lf-&lfi)/%lf",-b,sqrt(4*a*c-b*b),2*a,-b,sqrt(4*a*c-b*b),2*a);
	}

	return 0;
}
	void  solution(double a,double b,double c)
{
	x1=(-b+sqrt(judge))/2*a;
	x2=(-b-sqrt(judge))/2*a;
}
void  special(double a,double b,double c)
{
	x=-b/2*a;
}
