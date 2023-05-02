#include<stdio.h>
int main()
{
	int d_0[100]={0};
	int d_1[100]={0};
	int d_2[100]={0};
	int n=0,i=0,j=0,k=0,l=0,N=0,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&N);
		if(N%3==0)
		{
			d_0[j]=N;j++;
		}
		else if(N%3==1)
		{
			d_1[k]=N;k++;
		}
		else if(N%3==2)
		{
			d_2[l]=N;l++;
		}
	}
	for(i=0;i<j;i++)
	{
				if(m!=0)
				{
					printf(" ");
				}
				printf("%d",d_0[i]);m++;

	}
	for(i=0;i<k;i++)
	{
			if(m!=0)
					{
						printf(" ");
					}
		printf("%d",d_1[i]);m++;
		
	}
	for(i=0;i<l;i++)
	{
			if(m!=0)
			{
				printf(" ");
			}
		printf("%d",d_2[i]);
	}
	if(m==n)
	printf("\n");
}
