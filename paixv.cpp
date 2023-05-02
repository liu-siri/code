#include<stdio.h>
int main()
{
    int a[4]={0};
    int i=0,j=0,t=0;
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<=1;j++)
    {
        for(i=0;i<=1-j;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<=2;i++)
    {
    	if(i!=0)
    	{
    		printf("-->");
		}
		printf("%d",a[i]);
	}
}
