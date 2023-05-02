#include<stdio.h>
int main()
{
 	int n,i,j,ans=1,sum=0;
 	scanf("%d",&n);
 	for(j=1;j<=n;j++)
 	{	
		 for(i=1,ans=1;i<=j;i++)
		 {
 			ans=ans*i;
 				
		 }
		 printf("%dµÄ½×³ËÊÇ%d",j,ans);
 		 3sum=sum+ans;
	}
	printf("\n");
	 printf("%d",sum);
}
