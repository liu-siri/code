#include<stdio.h>
int cal();
int mul(int num1,int num2);
int div(int common_mul,int i,int arr[],int N);
int main()
{
	int C=0,i=0,ans=0;
	scanf("%d",&C);
	for(i=0;i<C;i++)
	{
		ans=cal();
		printf("%d\n",ans);
	}
	return 0;
}
int cal()
{
	int i=0,N=0,common_div=1,common_mul=1;
	int arr[35]={0};
	scanf("%d",&N);
	arr[N]=1;
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	common_mul=mul(arr[0],arr[1]);
	common_div=div(arr[0]/common_mul*arr[1],2,arr,N);
	return common_div;
}
int mul(int num1,int num2)
{
	int max=0,min=0,t=0;
	if(num1>num2){
		max=num1,min=num2;
	}
	else{
		max=num2,min=num1;
	}
	t=max%min;
	while(t)
	{
		max=min;min=t;t=max%min;
	}
	return min;
}
int div(int common_div,int i,int arr[],int N)
{
	int common_mul_2=mul(common_div,arr[i]);	
	if(i==N)return arr[i]/common_mul_2*common_div;
	else return div(arr[i]/common_mul_2*common_div,i+1,arr,N);
}
