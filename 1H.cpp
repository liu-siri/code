#include<stdio.h>
#include<algorithm>
using namespace std;
#define max 1001
#define money 200
int cal(int tian[],int king[],int n);
void init(int tian[],int king[]);
bool cmp(int num1,int num2);
int main()
{
	int tian[max]={0};
	int king[max]={0};
	int n=0,i=0,j=0,ans=0;
	scanf("%d",&n);
	while(n!=0)
	{
		for(i=0;i<n;i++)scanf("%d",&tian[i]);
		for(i=0;i<n;i++)scanf("%d",&king[i]);
		sort(tian,tian+n,cmp);
		sort(king,king+n,cmp);
		ans=cal(tian,king,n);
		printf("%d\n",money*ans);
		init(tian,king);
		scanf("%d",&n);
	}
	return 0;
}
bool cmp(int num1,int num2)
{
	return num1>num2;
}
int cal(int tian[],int king[],int n)
{
	int i=0,j=0,ans=0;
	while(n--)
	{
		if(tian[i]>king[j])
		{
			i++;j++;ans++;
		}
		else if(tian[i]<king[j])
		{
			j++;ans--;
		} 
	}
	return ans;
}
void init(int tian[],int king[])
{
	int i=0;
	for(i=0;i<max;i++)
	{
		tian[i]=0;king[i]=0;
	}
}
