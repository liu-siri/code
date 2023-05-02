#include<stdio.h>
void cal(int num[],char key[],int hh[],int mm[],int N);
int main()
{
	int num[10000]={0};
	char key[10000]={0};
	int hh[10000]={0};
	int mm[10000]={0};
	int N=0,i=0,k=0;
	scanf("%d",&N);
	for(i=0;i<N;)
	{
		scanf("%d %c %d:%d",&num[k],&key[k],&hh[k],&mm[k]);
		if(num[k]==0)
		{
			i++;
		}
		k++;
	}
	cal(num,key,hh,mm,N);
	return 0;
}
void cal(int num[],char key[],int hh[],int mm[],int N )
{
	int i=0,times=0,k=0,j=0,sum=0,flag=0;
	double avg=0;
	for(i=0;i<N;)
	{
		flag=0;
		if(num[k]==0)
		{
			if(i!=0)
			{
				printf("\n");
			}
			if(times==0)
			{
				avg=0;
			}
			else
			{
				avg=1.0*sum/times;
			}
			printf("%d %.0lf",times,avg);
			i++;k++;
			sum=0;times=0;
		}
		else
		{
			if(key[k]=='S')
			{
				for(j=k+1;num[j]!=0&&flag==0;j++)
				{
					if(num[k]==num[j]&&key[j]=='E')
					{
						times++;
						sum+=(hh[j]-hh[k])*60+mm[j]-mm[k];
						flag=1;
						num[j]=1001;
					}
                    if(flag==0&&num[j]==num[k]&&key[j]=='S')
                    {
                        num[j]=1020;
                    }
				}
			}
			k++;
		}
	}
}
