#include<stdio.h>
int main()
{
	int i=0,j=0,k=0,n=1,s1=0,s2=0,s3=0,tem=0,max;
	int a[20000]={0};
	int che[20000]={0};
	scanf("%d %d %d",&s1,&s2,&s3);
	for(i=1;i<=s1;i++)
	{
		for(j=1;j<=s2;j++)
		{
			for(k=1;k<=s3;k++)
			{
				a[n]=i+j+k;
				n++;
			}
		}
	}
	for(i=1;i<=s1*s2*s3;i++)
	{
		che[a[i]]++;
	}
	max=3;
	for(tem=3;tem<=s1*s2*s3;tem++)
	{
		if(che[a[tem]]>che[max])
		{
			max=a[tem];
		}
	}
	printf("%d",max);
	return 0;
}
