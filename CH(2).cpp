#include<stdio.h>
#include<math.h>
void scaner(int[],int*,int*);
int judger(int[],int[],int,int);
void printer(int [],int,int,int);
int main()
{
	int num[100000]={0},arr[100000]={0},N=0,n=1,wei=0;
	scaner(num,&N,&n);
	wei=judger(num,arr,N,n);
	printer(arr,N,wei,num[1]);
	return 0;
}
void scaner(int num[],int* N1,int *n1)
{
	char ch=0;
	int counter=0,i=0;
	while(ch!='\n'&&ch!='r')
	{
		scanf("%c",&ch);
		if(ch=='\n'||ch=='r')
		{
			break;
		}
		num[counter+1]=ch-'0';
		counter++;
	}
	*N1=counter;
	*n1=counter*counter;
	for(i=counter+1;i<=*n1;i++)
	{
		scanf("%c",&ch);
		if(i%(*N1)==0)
		{
			getchar();
		}
		num[i]=ch-'0';
	}
	/*for(i=1;i<=*n1;i++)
	{
		printf("%d",num[i]);
		if(i%*N1==0)
		{
			printf("\n");
		}
	}*/
}
int judger(int num[],int arr[],int N,int n)
{
	int i,tem=1,ans=1;
	for(i=2;i<=n;i++)
	{
		if(num[i]==num[i-1])
		{
			tem++;
		}
		if(num[i]!=num[i-1]||i==n)
		{
			arr[ans]=tem;
			ans++;
			tem=1;
		}
	}
	return ans-1;
}
void printer(int arr[],int N,int wei,int flag)
{
	int i=1;
	printf("%d ",N);
	if(flag!=0)
	{
		printf("0 ");
	}
	for(i=1;i<=wei;i++)
	{
		printf("%d ",arr[i]);
	}
}

	
