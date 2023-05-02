#include <stdio.h>
#include<math.h>

int isAmicable(int number1 , int number2 ) ;

int main()
{
    int        t , num1 , num2 ;
    
    scanf( "%d" , &t ) ;
    
    while ( t -- )
    {
        scanf( "%d%d", &num1 , &num2);
        if ( isAmicable( num1 , num2 ) )    
            printf("YES\n");
        else
            printf("NO\n");        
    }
  
    return 0;
}

int isAmicable(int number1 , int number2 ) 
{
	int n=0,sum1=0,sum2=0;
	for(n=2;n<=sqrt(number1);n++)
	{
		if(number1%n==0)
		{
			sum1+=n+number1/n;
		}
	}
	sum1+=1;
	for(n=2;n<=sqrt(number2);n++)
	{
		if(number2%n==0)
		{
			sum2+=n+number2/n;
		}
	}
	sum2+=1;
	if(sum1==number2&&sum2==number1)
	{
		return 1; 
	}
	else
	{
		return 0;
	}
	
}

