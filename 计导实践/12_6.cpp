#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reader(int time) ;
int main()
{
	int time = 0;
	scanf("%d",&time);
	reader(time);
	return 0;
}
void reader(int time) //loop 'n-1' times and then print at 'n' times(n=time)
{
    char a,aa[5];
    short b,bb[5];
    int c,cc[5];
    long d,dd[5];
    long long e,ee[5];
    float g,gg[5];
    double h,hh[5];
    int i=0;
	FILE *fp = fopen("dict.dic","rb");
for(i=1;i<=time;i++)
{
	fread(&a,sizeof(char),1,fp);
	fread(&b,sizeof(short),1,fp);
	fread(&c,sizeof(int),1,fp);
	fread(&d,sizeof(long),1,fp);
	fread(&e,sizeof(long long),1,fp);	
	fread(&g,sizeof(float),1,fp);
	fread(&h,sizeof(double),1,fp);
	fread(aa,sizeof(char),5,fp);//char 
	fread(bb,sizeof(short),5,fp);//short 
	fread(cc,sizeof(int),5,fp);//int 
	fread(dd,sizeof(long),5,fp);//long
	fread(ee,sizeof(long long),5,fp);//long long
	fread(gg,sizeof(float),5,fp);//float
	fread(hh,sizeof(double),5,fp);//double
}
		printf("%c\n",a);
		printf("%hd\n",b);
		printf("%d\n",c);
		printf("%ld\n",d);
		printf("%lld\n",e);
		printf("%f\n",g);
		printf("%lf\n",h);
		printf("%s",aa);
		printf("\n");
		for(i=0;i<=4;i++)
		{
			if(i==0) printf("%hd",bb[i]);
			else printf(" %hd",bb[i]);
		}
		printf("\n");
		for(i=0;i<=4;i++)
		{
			if(i==0) printf("%d",cc[i]);
			else printf(" %d",cc[i]);
		}
		printf("\n");
		for(i=0;i<=4;i++)
		{
			if(i==0) printf("%ld",dd[i]);
			else printf(" %ld",dd[i]);
		}
		printf("\n");
	    for(i=0;i<=4;i++)
		{
			if(i==0) printf("%lld",ee[i]);
			else printf(" %lld",ee[i]);
		}
		printf("\n");
		for(i=0;i<=4;i++)
		{
			if(i==0) printf("%f",gg[i]);
			else printf(" %f",gg[i]);
		}
		printf("\n");
		for(i=0;i<=4;i++)
		{
			if(i==0) printf("%lf",hh[i]);
			else printf(" %lf",hh[i]);
		}
		printf("\n");

}


