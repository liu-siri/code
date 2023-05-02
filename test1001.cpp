#include<stdio.h>
int main()
{
    char a;
    short b;
    int c;
    long e;
    long long d;
    float f;
    double g;
    scanf("%c\n",&a);
    scanf("%hd\n",&b);
    scanf("%d\n",&c);
    scanf("%ld\n",&d);
    scanf("%lld\n",&e);
    scanf("%f\n",&f);
    scanf("%lf\n",&g);
    printf("The 'char' variable is %c, it takes %d byte.\n",a,sizeof(a));
    printf("The 'short' variable is %hd, it takes %d bytes.\n",b,sizeof(b));
    printf("The 'int' variable is %d, it takes %d bytes.\n",c,sizeof(c));
    printf("The 'long' variable is %ld, it takes %d bytes.\n",d,sizeof(d));
    printf("The 'long long' variable is %lld, it takes %d bytes.\n",sizeof(e));
    printf("The 'float' variable is %f, it takes %d bytes.\n",f,sizeof(f));
    printf("The 'double' variable is %lf, it takes %d bytes.\n",g,sizeof(g));
    return 0;
}

