#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int scaner(int num[]);
int sum(int num[],int n);
int main()
{
	int n=0;
	long long int ans=0;
	int num[1200]={0};
	n=scaner(num);
	ans=(long long int)sum(num,n)*(long long int)pow(2.0,(double)(n-1));
	printf("%lld",ans);
	return 0;
}
int scaner(int num[])
{
	char s[1200]={0};
	int i=0,word=0,n0=0,number=0;
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		{
			num[n0]=number;
			n0++;number=0;
			word=0;i++;
		}
		else
		{
			if(word==0)
			{
				number=s[i]-'0';
				word=1;i++;
			}
			else
			{
				number=number*10+s[i]-'0';
				i++;
			}
		}
	}
	num[n0]=number;
	n0++;
	return n0; 
}
int sum(int num[],int n)
{
	int j=0,add=0;
	for(j=0;j<n;j++)
	{
		add+=num[j];
	}
	return add;
}
