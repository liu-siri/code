#include<stdio.h>
int main()
{
	int t=0,i=0,j=0,l=0,c=0,n=0,i0=0,i1=0,i2=0,i3=0;
	scanf("%d",&t);
	for(i0=0;i0<t;i0++)
	{
		scanf("%d %d %d",&l,&c,&n);
		for(i1=0;i1<l;i1++)
		{
			for(i=0;i<4;i++)
			{
				if(i==0)
				{
					for(j=0;j<c*(1+n)+1;j++)
					{
						printf("*");
					}
					printf("\n");
				}
				else
				{
					for(i2=0;i2<c;i2++)
					{
						printf("*");
						for(i3=0;i3<n;i3++)
						{
							printf(".");
						}
					}
					printf("*");
					printf("\n");
				}
			}
		}
		for(j=0;j<c*(1+n)+1;j++)
		{
			printf("*");	
		}
		printf("\n");
	}
	return 0;
}
