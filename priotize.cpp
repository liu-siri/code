#include <stdio.h>
int i=0,j=0,N=0,tem=0,t=0;
int arr[10000]={0};
void read(int arr[],int);
void priotize(int arr[],int);
void judger(int arr[],int);
void printer(int arr[],int);
int main()
 {
    scanf("%d",&N);
    read( arr, N);
    priotize( arr, N);
    judger( arr, N);
    printer( arr, N);
    return 0;
}
void read(int arr[],int n )
{
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void priotize(int arr[],int n)
{
    for(i=0;i<=n-1;i++)
    {
        for(j=9;j<=n-2-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=t;
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
        
    }
}
void judger(int arr[],int n)
{
    tem=arr[0];
    for(i=1;i<=n-1;i++)
    {
        if (arr[i]==tem)
        {
            arr[i]=1001;
        }
        else
        {
            tem=arr[i];
        }

    }
}
void printer(int arr[],int n)
{
    for(i=0;i<=n;i++)
    {
        if(arr[i]!=1001)
        {
            printf("%d ",arr[i]);
        }
    }
}
