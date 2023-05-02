#include<stdio.h>
int main()
{
	int n=0,n0=0,n1=0,n2=0,k=0,i=0,i1=0,i2=0,i3=0,i4=0,x=1,y=1,numi=0,numsym=0;
	scanf("%d",&n);
	if(n%10!=0)
	{
		n2=n;
		for(k=0;n2!=0;k++,n2/=10)
		{
			;
		}
		for(i=1;i<=k/2;i++)
		{
			n0=n,n1=n,x=1,y=1;
			for(i1=0;i1<i-1;i1++,n0/=10)
			{
			;
			}
			numi=n0%10;
			for(i2=0;i2<k-i;i2++,n1/=10)
			{
				;
			}
			numsym=n1%10;
			for(i3=0;i3<i-1;i3++,x*=10)
			{
				;
			}
			for(i4=0;i4<k-i;i4++,y*=10)
			{
				;
			}
			n=n-numi*x-numsym*y+numi*y+numsym*x;
		}
		printf("%d",n);
	}
	else
	{
		printf("The number cannot be changed.");
	} 
	return 0;
 } 
