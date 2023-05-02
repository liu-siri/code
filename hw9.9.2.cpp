#include<stdio.h>

void printFactor( int, int ); 

int main()
{
    int a,b,i ;
    
    scanf( "%d%d", &a, &b );
    for( i = a ; i <= b ; i++ )
        printFactor( i , 1 ) ;    
    
    return 0;
}
int isprime(int factor)
{
	for(int i=2;i<=factor-1;i++)
	{
		if(factor/i==0)
		{
			return 0;
		}
	}
	return 1;
}
void printFactor( int n, int j)
{
	int factor=0,flag=0;
	if(j==1)
	{
		for(factor=2;factor<=n&&flag==0;factor++)
		{
			if(isprime(factor))
			{
				printf("%d=%d",n,factor);
				flag=1;
			}
		}
		factor--;
		printFactor(n/factor,2);
	}
	else
	{
		for(factor=2;factor<=n&&flag==0;factor++)
		{
			if(isprime(factor))
			{
				printf("*%d",factor);
				flag=1;
			}
		}
		factor--;
		printFactor(n/factor,2);
	}
}



