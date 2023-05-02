#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void counter(char[],int []);
int findMm(int []);
int prime(int);
int main()
{
	char ch[120]={0};
	int times[30]={0};
	int ans=0;
	gets(ch);
	counter(ch,times);
	ans=findMm(times);
	if(prime(ans))
	{
		printf("Lucky Word\n%d",ans);
	}
	else
	{
		printf("No Answer\n%d",ans);
	}
	return 0;
 } 
 void counter(char ch[],int times[])
 {
 	int i=0,num=0;
 	for(i=0;ch[i]!='\0';i++)
 	{
 		num=ch[i]-'a';
 		times[num]++;
	 }
 }
 int findMm(int times[])
 {
 	int i=0,M=1,m=1000;
	for(i=0;i<=25;i++)
	{
		if(times[i]<m&&times[i]!=0)
		{
			m=times[i];
		}
		if(times[i]>M)
		{
			M=times[i];
		}
	}
	return M-m;
 }
 int prime(int ans)
 {
 	int i=0;
 	if(ans==0||ans==1)
 	{
 		return 0;
	 }
 	for(i=2;i<ans;i++)
 	{
 		if(ans%i==0)
 		{
 			return 0;
		 }
	 }
	return 1;
 }
