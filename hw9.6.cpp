#include <stdio.h>

int    evaluation(int n,int a) ;
int main()
{
       int        n , a ; 
       
       scanf("%d%d",&n,&a);       
       printf("%d\n",evaluation(n,a));

    return 0;
}



#include<math.h>
int evaluation(int n,int a)
{
	if(n==1)
	{
		return 1+a+a*a;
	}
	else
	{
		return evaluation(n-1,a)+(int)pow((float)a,(float)(n+1));
	}
}

