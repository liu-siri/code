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



int isprime(int p)
{
    if(p==1)
    {
    	return 0;
	}
	for(int i=2;i<=p-1;i++)
    {
        if(p%i==0)
        {
            return 0;
        }
    }
    return 1;
}
void printFactor(int n,int j)
{
    int p=0,flag=0;
	else if(n==j)
	{
		printf("\n");
	 } 
    for(p=j;p<=n&&flag==0;p++)
    {
         if(isprime(p)==1&&n%p==0)
         {
             if(j==1&&isprime(n))
             {
                 printf("%d=%d",n,p);
                 flag=1;
             }
             else if(j==1&&isprime(n)==0)
             {
                 printf("%d=%d",n,p);
                 printFactor(n/p,p);
                 flag=1;
             }
             else if(n==p)
             {
                 printf("*%d",p);
             }
             else
             {
                 printf("*%d",p);
                 printFactor(n/p,p);
                 flag=1;
             }
         }
    }
}
