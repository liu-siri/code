#include<stdio.h>
int sum(int);
int main()
{
	int n=0,ans=0;
	scanf("%d",&n);
	ans=sum(n);
	printf("%d",ans);
 } 
 int sum(int n)
 {
 	int num=0,ans=0;
	 if(n==1)
 	{
 		scanf("%d",&num);
 		return num;
	 }
	 else
	 {
	 	scanf("%d",&num);
	 	return sum(n-1)+num;
	 }
 }
