#include<stdio.h>
int main()
{
	int n=0,k=0,n0=0,n1=0,n2=0,n3=0,i0=0,i1=0,i2=0,i3=0,i4=0,i5=0,i6=0,former=0,latter=0,middle=0,trans=0;
	scanf("%d",&n);
	n0=n,n1=n,n2=n,n3=n;
	if(n%10==0)
	{
		printf("The number cannot be changed.");
	}
	else
	{
		for(k=0;(n0%10!=0)||(n0/10!=0);k++,n0/=10)
		{
			;
		}
		for(i0=1;i0<=k/2;i0++,n1=n,n2=n)
		{
			if(k%2==0)
			{ 
				for(i1=0;i1<k-i0;i1++,n1/=10)
				{
					;
				}
				former=n1%10;
				for(i2=0;i2<i0-1;i2++,n2/=10)
				{
					;
				}
				latter=n2%10;
				trans=former;
				former=latter;
				latter=trans;
				for(i3=0;i3<i0-1;i3++)
				{
					printf(" ");
				}
				printf("%d",former);
				for(i4=0;i4<k-i0;i4++)
				{
					printf(" ");
				}
				printf("%d",latter);
			}
			else
			{
				for(i1=0;i1<k-i0-1;i1++,n1/=10)
				{
					;
				}
				former=n1%10;
				for(i2=0;i2<i0;i2++,n2/=10)
				{
					;
				}
				latter=n2%10;
				trans=former;
				former=latter;
				latter=trans;
				for(i3=0;i3<i0-1;i3++)
				{
					printf(" ");
				}
				printf("%d",former);
				for(i4=0;i4<k-i0;i4++)
				{
					printf(" ");
				}
				printf("%d",latter);
				for(i5=0;i5<(k-1)/2;i5++)
				{
					;
				}
				for(i6=0;i6<(k-1)/2;i6++,n3/10)
				{
					;
				}
				middle=n3%10;
				printf("%d",middle);
			}
		}
	}
	return 0;
 } 
