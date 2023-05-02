#include<stdio.h>
int main()
{
	int counter[300]={0};
	int N=0,K=0,S=0,i=0,ans=0,sc=0,pat=0;
	scanf("%d %d %d",&N,&K,&S);
	for(i=0;i<N;i++)
	{
		scanf("%d %d",&sc,&pat);
		if(sc<175)continue;
		if(pat>=S)ans++;
		else counter[sc]++;
	}
	for(i=175;i<=290;i++)
	{
		if(counter[i]>K)ans+=K;
		else ans+=counter[i];
	}
	printf("%d",ans);
}
