#include<stdio.h>
int main()
{
	int n=1;
	double x=0,an=2,sn=2;
	scanf("%lf",&x);
	while(sn<=x)
	{
		an*=0.98;
		sn+=an;	
		n++;
	}
	printf("%d",n);
	return 0;
}
