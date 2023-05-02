#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
    double S,Area,x;
    scanf("%d %d %d",&a,&b,&c);
    S=(a+b+c)/2.0;//printf("S=%f\n",S);
    x=S*(S-a)*(S-b)*(S-c);
    Area=sqrt(x);
      if(a+b>c&&a+c>b&&b+c>a)
    {
        printf("%.3lf",Area);
    }
    else
    {
        printf("The edges cannot make up of a triangle.");
    }
    return 0;
}
