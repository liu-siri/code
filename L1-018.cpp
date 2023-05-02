#include<stdio.h>
#include<math.h>
int main()
{
	int hh=0,mm=0,times=0,i=0;
	char h[2]={0};
	char m[2]={0};
	scanf("%d:%d",&hh,&mm);
	if(hh<=12)
	{
		if(hh<10)
		{
			h[0]='0';
			h[1]=hh+'0';
		}
		else
		{
			h[1]=hh%10+'0';
			h[0]=hh/10%10+'0';
		}
		if(mm<10)
		{
			m[0]='0';
			m[1]=mm+'0';
		}
		else
		{
			m[1]=mm%10+'0';
			m[0]=mm/10%10+'0';
		}
		printf("Only %c%c:%c%c.  Too early to Dang.",h[0],h[1],m[0],m[1]);
	}
	else
	{
		hh-=12;
		if(mm!=0)
		{
			times++;
		}
		times+=hh;
		for(i=0;i<times;i++)
		{
			printf("Dang");
		}
	}
	return 0;
}
