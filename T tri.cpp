#include<stdio.h>
int main()
{
	int arr[10]={0},N=0,i=0,d=0;
	char ch=0;
	scanf("%c",&ch);
	while(ch!='\n')
	{
		N=ch-'0';
		d=N%10;
		arr[d]++;
		scanf("%c",&ch);
	}
	for(i=0;i<=9;i++)
	{
		if(arr[i]!=0)
		{
			printf("%d:%d\n",i,arr[i]);
		}
	}
	return 0;
}
