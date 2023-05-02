#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	    char a='X',aa[5];//??????aa?????????,???????'\0',??????
	    short b=1,bb[5];
	    int c=2,cc[5];
	    long d=3,dd[5];
	    long long e=4,ee[5];
	    float g=5,gg[5];
	    double h=6,hh[5];
	    int i ;
	for(i=0;i<=4;i++)
	{
		aa[i]='X';bb[i]=1;cc[i]=1;dd[i]=4;ee[i]=5;gg[i]=6;hh[i]=7;
	}
	FILE * fp=fopen("dict.dic","wb");
	for(i=0;i<5;i++)
	{
		 fwrite(&a,sizeof(a),1,fp);
		 fwrite(&b,sizeof(b),1,fp);
		 fwrite(&c,sizeof(c),1,fp);
		    fwrite(&d,sizeof(d),1,fp);
		    fwrite(&e,sizeof(e),1,fp);
		    fwrite(&g,sizeof(g),1,fp);
		    fwrite(&h,sizeof(h),1,fp);
		    fwrite(aa,sizeof(a),5,fp);
		    fwrite(bb,sizeof(b),5,fp);
		    fwrite(cc,sizeof(c),5,fp);
		    fwrite(dd,sizeof(d),5,fp);
		    fwrite(ee,sizeof(e),5,fp);
		    fwrite(gg,sizeof(g),5,fp);
		    fwrite(hh,sizeof(h),5,fp);
	}
	return 0;
}
