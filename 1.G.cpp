#include<stdio.h>
#define len 10001
#include<stdlib.h>
#include<algorithm>
using namespace std;
typedef struct{
	double J;
	double F;
	double rate;
}room;
double cal(room r[],int M,int N);
bool cmp(room a,room b)
{
return a.rate>b.rate;
}
int main()
{
	int M=0,N=0,i=0;
	double ans=0;
	room r[len]={0};
	while(scanf("%d %d",&M,&N)==2&&((M!=-1)||(N!=-1)))
	{
		for(i=0;i<N;i++)
		{
			scanf("%lf %lf",&r[i].J,&r[i].F);
			r[i].rate=r[i].J/r[i].F;
		}
		sort(r,r+N,cmp); 
		ans=cal(r,M,N);
		ans=(int)((ans*1000)+0.5)/1000.0;
		printf("%.3lf\n",ans);
	}
	return 0;
}

double cal(room r[],int M,int N)
{
	int i=0;
	double ans=0,cat=M;
	for(i=0;i<N;i++)
	{
		if(cat>r[i].F){
			cat-=r[i].F;
			ans+=r[i].J;
		}
		else{
			ans+=cat*(r[i].J*1.0)/(r[i].F);
			break;
		}
	}
	return ans;
}
