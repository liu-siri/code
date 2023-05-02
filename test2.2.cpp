#include <stdio.h>

long long recombination(long long num , int position) ; 

int main()
{
    long long    num ;
    int            position ;
    
    scanf( "%lld%d" , &num , &position );
    printf( "%lld\n" , recombination( num , position) ) ;
    
    return 0;
}


#include<math.h>
long long recombination(long long num , int k) 
{
    int div1=1,div2=1,numk=0,newe=0,copy=num,n=0,i=0;
    for(copy=num;copy!=0;copy/=10,n++)
    {
        ;
    }
    for(i=0;i<n-k+1;i++)
    {
    	div1*=10;
	}
	for(i=0;i<n-k;i++)
	{
		div2*=10;
	}
    numk=num/div2%10;
    newe=num-num%div1+num%div2*10+numk;
    return newe;
}
