#include<stdio.h>
#include<string.h>
int max(int G,int P,int L,int T);
void printer(int N,int G,int P,int L,int T);
int main()
{
	char s[10001]={0};
	int G=0,P=0,L=0,T=0,N=0;
	int i=0;
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]=='G'||s[i]=='g')
		{
			G++;
		}
		else if(s[i]=='P'||s[i]=='p')
		{
			P++;
		}
		else if(s[i]=='L'||s[i]=='l')
		{
			L++;
		}
		else if(s[i]=='T'||s[i]=='t')
		{
			T++;
		}
		i++;
	}
	N=max(G,P,L,T);
	printer(N,G,P,L,T);
	return 0;
}
int max(int G,int P,int L,int T)
{
	int N=0;
	if(G>N)
	{
		N=G;
	}
	if(P>N)
	{
		N=P;
	}
	if(L>N)
	{
		N=L;
	}
	if(T>N)
	{
		N=T;
	}
	return N;
}
void printer(int N,int G,int P,int L,int T)
{
	int i=0;
	for(i=0;i<N;i++)
	{
		if(G>0)
		{
			printf("G");
			G--;
		}
		if(P>0)
		{
			printf("P");
			P--;
		}
		if(L>0)
		{
			printf("L");
			L--;
		}
		if(T>0)
		{
			printf("T");
			T--;
		}
	}
}
