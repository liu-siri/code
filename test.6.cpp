#include<iostream>
#include<cstdio>

void test()
 {
 	static int a=1;
 	a++;
 	printf("%d\n",a);
 }



int main()
{
	int i=0;
	while(i<5)
	{
		i++;
		test();
	}
	return 0;
 } 
 
 
