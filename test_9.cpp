#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
    double S,Area,x;
    scanf("%lf %lf %lf",&a,&b,&c);
    S=(a+b+c)/2;printf("S=%f\n",S);
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
return 0;
}
