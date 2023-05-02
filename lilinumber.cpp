#include<stdio.h>
int main()
{
	int N=0,n=0,num=0,i=0,j=0,copy=0,yu=0,right=0,left=0,sum=0,judge=0;
	for(N=10000;N<=99999;N++)
	{
		for(n=N;n!=0;n/=10,num++)
		{
			;
		}
		copy=N,right=0,yu=0,sum=0;
		for(i=0;i<num-1;i++)
		{
			yu=copy%10;
			copy/=10;
			for(j=0;j<i;j++)
			{
				yu*=10;
			}
			right+=yu;
			sum+=copy*right;
		}
		if(sum==N)
		{
			printf("%d ",N);
		}
	}
	return 0;
}
