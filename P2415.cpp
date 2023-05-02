#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int scaner(int s[]);
void cal(int s[],int len);
int cal2(int s[],int tem,int len);
int cal3(int n);
int main()
{
	int s[1200]={0};
	int len=0;
	len=scaner(s);
	cal(s,len);
	return 0;
}
int scaner(int s[])
{
	int len=0,k=0,word=0,num=0;
	char tem[1200]={0};
	gets(tem);
	while(tem[k]!='\0')
	{
		if(tem[k]==' ')
		{
			s[len]=num;
			word=0;k++;len++;
		}
		else
		{
			if(word==0)
			{
				num=tem[k]-'0';
			}
			else
			{
				num=num*10+tem[k]-'0';
			}
			word=1;k++;
		}
	}
	s[len]=num;
	len++;
	return len;
}
void cal(int s[],int len)
{
	int counter=1;
	long long int sum=0;
	for(counter=1;counter<=len;counter++)
	{
		sum+=cal2(s,counter,len);
	}
	printf("%lld",sum);
}
int cal2(int s[],int counter,int len)
{
	int sum2=0,i=0,j=0,ans=0;
	int mul1=0,mul2=0,mul3=0;
	if(counter==1)
	{
		for(i=0;i<=len-1;i++)
		{
			sum2+=s[i];
		}
		return sum2;
	}
	else
	{
		for(i=0;i+counter-1<=len-1;i++)
		{
			ans=cal2(&s[i+1],counter-1,len-i-1);
			mul1=cal3(len-i-1);
			mul2=cal3(counter-1);
			mul3=cal3(len-i-1-(counter-1));			
			sum2+=ans+s[i]*mul1/(mul2*mul3);
		}
		return sum2;		
	}
}
int cal3(int n)
{
	int i,sum3=1;
	for(i=n;i>=1;i--)
	{
		sum3*=i;
	}
	return sum3;
}
