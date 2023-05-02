#include<stdio.h>
int main()
{
	int num1=0,num2=0,num3=0,num4=0;
	int m,n;
	scanf("%d %d",&m,&n);
	for(num1=0;num1<=m;num1++)	
	for(num2=0;num2<=m;num2++)		
	for(num3=0;num3<=m;num3++)
	for(num4=0;num4<=m;num4++)
				{
					if((num1+num2+num3+num4==m)&&(num1+2*num2+3*num3+4*num4==n))
						{
							printf("%d %d %d",num2,num3,num4);
							printf("\n");
						}
				}
	return 0;
}
