#include<stdio.h>
struct sr
	{	
		char strength;
		
		char change;
		int age;
	};
int main()
{
	struct sr s={0};
	printf("%d",sizeof(s));
 } 
