#include<stdio.h>
#include<string.h>
void fun2(int N);
void fun3(int N);
void fun4(int N);
void fun5(int N);
void fun6(int N);
int main()
{
	int L=0,N=0;
	scanf("%d %d",&L,&N);
	switch(L)
	{
		case 2:
		{
			fun2(N);break;
		}
		case 3:
		{
			fun3(N);break;
		}
		case 4:
		{
			fun4(N);break;
		}
		case 5:{
			fun5(N);break;
		}
		case 6:{
			fun6(N);break;
		}
	}
	return 0;
}
void fun2(int N)
{
	int i=0,j=0;
	for(i=122;i>=97;i--)
	{
		for(j=122;j>=97;j--)
		{
			N--;
			if(N==0)
			{
				printf("%c%c",i,j);
			}
		}
	}
}
void fun3(int N){
	int a=0,b=0,c=0;
	for(a=122;a>=97;a--)
	{
		for(b=122;b>=97;b--)
		{
			for(c=122;c>=97;c--)
			{
				N--;
				if(N==0)
				{
					printf("%c%c%c",a,b,c);
				}
			}
		}
	}
}
void fun4(int N)
{
	int a=0,b=0,c=0,d=0;
	for(a=122;a>=97;a--)
	{
		for(b=122;b>=97;b--)
		{
			for(c=122;c>=97;c--)
			{
				for(d=122;d>=97;d--)
				{
					N--;
					if(N==0)
					{
						printf("%c%c%c%c",a,b,c,d);
					}
				}
			}
		}
	}
}
void fun5(int N)
{
	int a=0,b=0,c=0,d=0,e=0;
	for(a=122;a>=97;a--)
	{
		for(b=122;b>=97;b--)
		{
			for(c=122;c>=97;c--)
			{
				for(d=122;d>=97;d--)
				{
					for(e=122;e>=97;e--)
					{
						N--;
						if(N==0)
						{
						printf("%c%c%c%c%c",a,b,c,d,e);
						}
					}
				}
			}
		}
	}
}
void fun6(int N)
{
	int a=0,b=0,c=0,d=0,e=0,f=0;
	for(a=122;a>=97;a--)
	{
		for(b=122;b>=97;b--)
		{
			for(c=122;c>=97;c--)
			{
				for(d=122;d>=97;d--)
				{
					for(e=122;e>=97;e--)
					{
						for(f=122;f>=97;f--)
						{
							N--;
							if(N==0)
							{
								printf("%c%c%c%c%c%c",a,b,c,d,e,f);
												
							}
						}
					}
				}
			}
		}
	}
}
