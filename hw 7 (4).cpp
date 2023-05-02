
#include<stdio.h>

int reverseNum(int) ; 

int main()
{
    int        num ;

    scanf("%d",&num);
    reverseNum(num);
    //printf("The reverse form of number %d is %d.\n",num,reverseNum(num)) ;
	printf("%d",reverseNum(num));
    return 0;
}

int reverseNum(int num)
{
	int k=0,i=0,j=0,reverse=0,digit=0;
	int num0=num;
	for(k=0;num0!=0;k++,num0/=10)
	{
		;
	}
	for(i=0;i<k;i++)
	{
		digit=num%10;
		for(j=0;j<k-i-1;j++)
		{
			digit*=10;
		}
		reverse+=digit;
		num/=10;
	}
	return reverse;
}




