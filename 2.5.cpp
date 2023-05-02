#include<stdio.h>
int main()
{
    int i=0,j=0,chang=0,zheng=0,n=0,m=0,min=0,max=0;
    scanf("%d %d",&n,&m);
    if(n<=m)
    {
        min=n;
        max=m;
    }
    else
    {
        min=m;
        max=n;
    }
    for(i=1;i<=min;i++)
    {
        for(j=1;j<=min;j++)
        {
            if(i==j)
            {
                zheng+=(m-i+1)*(n-i+1);
            }
            else
            {
                chang+=(m-i+1)*(n-j+1);
            }
        }
    }
	for(i=1;i<=min;i++)
	{
		for(j=min+1;j<=max;j++)
		{
				chang+=(min-i+1)*(max-j+1);
		}
	}
    printf("%d %d",zheng,chang);
    return 0;
}
