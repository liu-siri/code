
#include<stdio.h>

 
void InsertSort(int a[],int n);

int main()
{
    int        n , i,    num[1000] ;
    
    scanf( "%d" , &n ); 
    for( i = 0 ; i < n ; i++ ) 
        scanf( "%d", &num[i] ) ;
    InsertSort( num , n ) ; 
    return 0 ;
}



void InsertSort(int a[],int n)
{
	int i=0,j=0,m=0,t=0,copy=0,num=0,flag=0;
	for(num=0;num<=n-2;num++)
	{
		copy=a[num+1];
		flag=0;
		for(i=0;i<=num&&flag==0;i++)
		{
			if(copy<=a[i])
			{
				for(j=num+1;j<=n-1;j++)
				{
					a[j]=a[j+1];
				}
				for(j=n-2;j>=i;j--)
				{
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
				a[i]=copy;
				flag=1;
			}
		}
		for(m=0;m<=n-1;m++)
		{
			printf("%d",a[m]);
			if(m!=n-1)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

