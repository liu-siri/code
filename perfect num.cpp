
#include <stdio.h>


int        isPerfect(int);


void    printPerfect(int);

int main()
{
    int i,a,b,count;
    
    scanf("%d%d",&a,&b);
    count = 0 ;
    for(i=a;i<=b;i++)
    {
        if (isPerfect(i))
        {
            printPerfect(i) ;
            count ++ ; 
        }        
    }
    printf("The total number is %d.\n",count); 
    return 0 ;
}



#include<math.h>
int i=0,j=0,sum=0;
int isPerfect(int n)
{
    int sum=0;
	for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i==sqrt(n))
            {
                sum+=sqrt(n);
            }
            else
            {
                sum+=i+n/i;
            }
        }
    }
    sum+=1;
    if(sum==n&&n!=1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void printPerfect(int n)
{
    printf("%d=1",n);
    for(j=2;j<=n-1;j++)
    {
        if(n%j==0)
        {
			printf("+%d",j);
		}
	}
    printf("\n");
}

