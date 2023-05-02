#include <stdio.h>

int findMax(int n) ;

int main()
{   
    int n ; 
    
    scanf("%d", &n); 
    printf("%d\n" , findMax( n ) ) ; 
    
    return 0;
}

int findMax(int n) 
{
    int num=0,ans=0;
	scanf("%d",&num);
    if(n==1)
    {
        return num;
    }
    else
    {
        ans=findMax(n-1);
		if(num>ans)
        {
        	return num;
		}
		else
		{
			return ans;
		}
    }
}

