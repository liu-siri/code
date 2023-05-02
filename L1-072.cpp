#include<stdio.h>
void scaner(int arr[][5]);
int add(int arr[][5],int dire);
int getmoney(int sum,int summer[],int coin[]);
int main()
{
    int arr[5][5]={0};
    int summer[20]={6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
    int coin[20]={10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
    int sum=0,x=0,y=0,i=0,direction=0;
    scaner(arr);
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",arr[x][y]);
    }
    scanf("%d",&direction);
    sum=add(arr,direction);
    printf("%d",getmoney(sum,summer,coin));
    return 0;
}
void scaner(int arr[][5])
{
    int i=0,j=0,i0=0,j0=0;
    int num[10]={0};
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0)
            {
				i0=i;j0=j;
			}
			num[arr[i][j]]++;
        }
    }
    for (i=1;i<=9;i++)
    {
		if(num[i]==0)
		{
			arr[i0][j0]=i;
		}
	}
}
int add(int arr[][5],int dire)
{
    int sum=0,i=0;
    if(dire>=1&&dire<=3)
    {
        for(i=1;i<=3;i++)
        {
            sum+=arr[dire][i];
        }
    }
    else if(dire>=4&&dire<=6)
    {
        for(i=1;i<=3;i++)
        {
            sum+=arr[i][dire-3];
        }
    }
    else if(dire==7)
    {
        sum=arr[1][1]+arr[2][2]+arr[3][3];
    }
    else if(dire==8)
    {
        sum=arr[1][3]+arr[2][2]+arr[3][1];
    }
    return sum;
}
int getmoney(int sum,int summer[],int coin[])
{
	int i=0;
	for(i=0;i<=18;i++)
	{
		if(sum==summer[i])
		{
			return coin[i];
		}
	}
}
