#include<stdio.h>
void scaner(char [][20],char ans[][20],int);
int checker(char [][20],char[][20],int);
int test(char [][20],char[][20],int);
void copy(char[][20],char[][20],int);
int move90(char [][20],char[][20],char[][20],char[][20],int);
int move180(char [][20],char[][20],char[][20],char[][20],int);
int move270(char [][20],char[][20],char[][20],char[][20],int);
int reflect(char [][20],char[][20],char[][20],char[][20],int);
int combine(char [][20],char[][20],char[][20],char[][20],int);
int similar(char [][20],char[][20],char[][20],char[][20],int);
void temreflect(char ch[][20],char ans[][20],char copy1[][20],char copy2[][20],int n);
int main()
{
	int n=0;
	char ch[20][20]={0},ans[20][20]={0};
	scanf("%d",&n);
	getchar();
	//getchar();
	scaner(ch,ans,n);
	printf("%d",checker(ch,ans,n));
	return 0;
}
void scaner(char ch[][20],char ans[][20],int n)
{
	int i=0,j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%c",&ch[i][j]);
		}
		if(j==n+1)
		getchar();
		//getchar();	
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%c",&ans[i][j]);
		}
		getchar();
		//getchar();
	}
	/*for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%c",ch[i][j]);
		}
		printf("\n");
	}*/
}
int checker(char ch[][20],char ans[][20],int n)
{
	char copy1[20][20]={0},copy2[20][20]={0};
	copy(ch,copy1,n);
	copy(ans,copy2,n);
	if(move90(ch,ans,copy1,copy2,n))
	{
		return 1;
	}
	copy(ch,copy1,n);
	copy(ans,copy2,n);
	if(move180(ch,ans,copy1,copy2,n))
	{
		return 2;
	}
	copy(ch,copy1,n);
	copy(ans,copy2,n);
	if(move270(ch,ans,copy1,copy2,n))
	{
		return 3;
	}
	copy(ch,copy1,n);
	copy(ans,copy2,n);
	if(reflect(ch,ans,copy1,copy2,n))
	{
		return 4;
	}
	copy(ch,copy1,n);
	copy(ans,copy2,n);
	if(combine(ch,ans,copy1,copy2,n))
	{
		return 5;
	}
	copy(ch,copy1,n);
	copy(ans,copy2,n);
	if(similar(ch,ans,copy1,copy2,n))
	{
		return 6;
	}
	return 7;
}
int move90(char ch[][20],char ans[][20],char copy1[][20],char copy2[][20],int n)
{
	int i=0,j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			copy1[j][n+1-i]=ch[i][j];	
		}
	}
	return test (copy1,copy2,n);
}
int move180(char ch[][20],char ans[][20],char copy1[][20],char copy2[][20],int n)
{
	int i=0,j=0,t=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			copy1[n+1-i][n+1-j]=ch[i][j];	
		}
	}
	return test (copy1,copy2,n);
}
int move270(char ch[][20],char ans[][20],char copy1[][20],char copy2[][20],int n)
{
	int i=0,j=0,t=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			copy1[n+1-j][i]=ch[i][j];
		}
	}
	return test (copy1,copy2,n);
}
int reflect(char ch[][20],char ans[][20],char copy1[][20],char copy2[][20],int n)
{
	int i=0,j=0,t=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			copy1[i][n+1-j]=ch[i][j];	
		}
	}
	return test (copy1,copy2,n);
}
int combine(char ch[][20],char ans[][20],char copy1[][20],char copy2[][20],int n)
{
	int i=0,j=0,t=0;
	char copy3[20][20]={0};
	temreflect(ch,ans,copy1,copy2,n);
	if(move90(copy1,ans,copy3,copy2,n))
	{
		return 5;
	}
	copy(ch,copy1,n);
	copy(ans,copy2,n);
	temreflect(ch,ans,copy1,copy2,n);
	if(move180(copy1,ans,copy3,copy2,n))
	{
		return 5;
	}
	copy(ch,copy1,n);
	copy(ans,copy2,n);
	temreflect(ch,ans,copy1,copy2,n);
	if(move270(copy1,ans,copy3,copy2,n))
	{
		return 5;
	}
}
int similar(char ch[][20],char ans[][20],char copy1[][20],char copy2[][20],int n)
{
	int i=0,j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(ch[i][j]!=ans[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}
int test(char copy1[][20],char copy2[][20],int n)
{
	int i=0,j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(copy1[i][j]!=copy2[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}
void copy(char ori[][20],char copyi[][20],int n)
{
	int i=0,j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			copyi[i][j]=ori[i][j];
		}
	}
}
void temreflect(char ch[][20],char ans[][20],char copy1[][20],char copy2[][20],int n)
{
	int i=0,j=0,t=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			copy1[i][n+1-j]=ch[i][j];	
		}
	}
}
