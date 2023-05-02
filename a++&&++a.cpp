#include<stdio.h>
int main()
{
	int a=0,b=0,c=0;
	a=5;
	c=++a;
	b=++c,c++,++a,a++;
	b+=++a+c;
	printf("a=%d b=%d c=%d",a,b,c);
	return 0;
}
