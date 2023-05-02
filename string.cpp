#include<stdio.h>
int main()
{
	int n=0,i=0,j=0,o=0,num=0;
	int ji[1000]={0};
	int ou[1000]={0};
	int ans[1000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			ou[o]=num;
			o++;
		}
		else
		{
			 ji[j]=num;
			 j++;
		}
	}
	for(i=0;i<o;i++)
	{
		ans[i]=ou[i];
	}
	for(i=0;i<j;i++)
	{
		ans[o+i]=ji[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",ans[i]);
		if(i!=n-1)
		{
			printf(" ");
		 } 
		 else
		 {
		 	printf("\n");
		 }
	} 
	return 0;
}
