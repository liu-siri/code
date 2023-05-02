
#include<stdio.h>

int mypow(int , int ) ;

int main()
{
    int x, n ;
    
    scanf("%d%d",&x,&n) ;
    printf("%d\n",mypow(x,n)) ;
                
    return 0;
}

int mypow(int x, int n)
{
	int i=0,ans=1;
	for(i=0;i<n;i++)
	{
		ans*=x;
	}
	return ans;
}



