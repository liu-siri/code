#include<stdio.h>
int check1(char * s);
int check2(char* s);
int main()
{
	int N=0,i=0,ans1=0,ans2=0,counter=0;
	char s[20]={0};
	scanf("%d",&N);
	getchar();
	for(i=0;i<N;i++)
	{
		gets(s);
		ans1=check1(s);
		ans2=check2(s);
		if(ans1==0||ans2==0)
		{
			printf("%s\n",s);
			counter++;
		}
	}
	if(counter==0)
	{
		printf("All passed");
	}
	return 0;
}
int check1(char * s)
{
	for(int i=0;i<17;i++)
	{
		if(s[i]<'0'||s[i]>'9')
		{
			return 0;
		}
	}
	return 1;
}
int check2(char* s)
{
	int val[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int M[12]={1 ,0 ,10 ,9 ,8 ,7 ,6 ,5 ,4 ,3 ,2}; 
	int i=0,sum=0,Z=0,res=0;
	for(i=0;i<17;i++)
	{
		sum+=(s[i]-'0')*val[i];
	}
	Z=sum%11;
	res=s[17]-'0';
	if(s[17]=='X')
	{
		res=10;
	}
	if(M[Z]==res)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
