#include<stdio.h>
#include<math.h>
double f(double num);
double cal(long long int Y);
int main()
{
	int T=0,i=0;
	long long int Y=0;
	double min=f(0);
	double max=f(100);
	double ans=0;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		scanf("%lld",&Y);
		if(Y<min||Y>max)printf("No solution!\n");
		else{
			ans=cal(Y);
			printf("%.4lf\n",ans);	
		}
	}
	return 0;
}
double f(double num)
{
	return 8*pow(num,4)+7*pow(num,3)+2*pow(num,2)+3*num+6;
}
double cal(long long int Y)
{
	double left=0,right=100,mid=0,val=0;
	mid=(left+right)/2;val=f(mid);
	while(fabs(val-Y)>0.000001)
	{
		if(val-Y==0)return mid;
		else if(val-Y<0)left=mid+0.0000001;
		else right=mid-0.0000001;
		mid=(left+right)/2;
		val=f(mid);
	}
	return mid;
}
