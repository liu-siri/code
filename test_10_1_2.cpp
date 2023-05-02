#include<stdio.h>
int main()
{
    int num1=0,num2=0,num3=0,num4=0,m,n;
    
    m=15,n=20;
    while(num1<=m)
    {
        num2=0;
		while(num2<=m)
        {
            num3=0;
			while(num3<=m)
            {
                num4=0;
				while(num4<=m)
                {
                    if((num1+num2+num3+num4==m)&&(num1+2*num2+3*num3+4*num4==n))
					{
						printf("%d %d %d ",num2,num3,num4);
	                    printf("\n");
	            	}
	            num4++;
                }
                num3++;
            }
            num2++;
        }
        num1++;
    }
    return 0;
}
