#include<stdio.h>
int main()
{
    int n=0,row=1,bla=0,star=0;
    scanf("%d/n",&n);
    while(row<=n)
    {
        bla=0,star=0;
        while(bla<(n-row))
        {
            bla++;
			printf(" ");
            
        }
        while(star<(2*row-1))
        {
            printf("*");
            star++;
        }
        printf("\n");
        row++;
    }
    row=1;
    while(row<=(n-1))
    {
        bla=0,star=0;
        while(bla<row)
        {
            bla++;
			printf(" ");    
        }
        while(star<((-2)*row+2*n-1))
        {
            printf("*");
            star++;
        }
        printf("\n");
        row++;
    }
    return 0;
}
