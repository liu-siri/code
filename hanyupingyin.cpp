#include<stdio.h>
int main()
{
    int n=0,i=0;
	int num[10000]={0};
    scanf("%d",&n);
    if(n==0)
    {
    	printf("ling");
	}
	else
	{
		if(n<0)
    {
        printf("fu ");
        n=-n;
    }
    for(i=0;n!=0;n/=10,i++)
    {
  		num[i]=n%10;
    }
    for(i-=1;i>=0;i--)
    {
    switch(num[i])
        {
            case 0:
            {
            	printf("ling");break;
            }
            case 1:
            	{
            		printf("yi");break;
				}
			case 2:
				{
					printf("er");break;
				}
			case 3:
				{
					printf("san");break;
				}
			case 4:
				{
					printf("si");break;
				}
			case 5:
				{
					printf("wu");break;
				}
			case 6:
				{
					printf("liu");break;
				}
			case 7:
				{
					printf("qi");break;
				}
			case 8:
				{
					printf("ba");break;
				}
			case 9:
				{
					printf("jiu");break;
				}
        }
        if(i!=0)
        {
        	printf(" ");
		}
    }
	}
        
}
