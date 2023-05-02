#include<stdio.h>
void output(int [],int );
int main()
{
	int n=0,i=0;
	char ch=0;
	int a[1000]={0};
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		scanf("%c",&ch);
		a[i]=ch-'0';
	}
	output(a,n);
}
void output(int a[],int n)
{
	int i=0,j=0,m=0;
	char cher[5][31]={{"XXX..XXXXXXXX.XXXXXXXXXXXXXXXX"},
                      {"X.X..X..X..XX.XX..X....XX.XX.X"},
                      {"X.X..XXXXXXXXXXXXXXXX..XXXXXXX"},
                      {"X.X..XX....X..X..XX.X..XX.X..X"},
                      {"XXX..XXXXXXX..XXXXXXX..XXXXXXX"}};
	for(m=0;m<=4;m++)
	{
		for(j=0;j<n;j++)
		{
			for(i=3*a[j];i<=3*a[j]+2;i++)
			{
				printf("%c",cher[m][i]);
				if(i%3==2&&j!=n-1)
				{
					printf(".");
				}
			}
		}
		if(m!=4)
		{
				printf("\n");
		}
	}
}

