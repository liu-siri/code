#include<stdio.h>
#include<math.h>
int main()
{
	int m=0,n=0,an=0;
	double X=0,flag=0,div=0;
	scanf("%d %d",&n,&m);
	div=pow(3.0,n);
	for(X=1;flag==0;X++)
	{
		an=(X-2.5)*div+2.5;
		if((int)an==m)
		{
			flag=1;
		}
	}
	X--;
	printf("%d",(int)X);
	return 0;
}
