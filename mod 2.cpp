#include<stdio.h>
int main()
{
	int n=0,i=1,sum=0;
	char ch=0;
	scanf("%c",&ch);
	n=ch-'0';
	for(i=1;ch!='\n';i++)
	{
		sum+=n*i;
		i++;
		scanf("%c",&ch);
		n=ch-'0';	
	}
	printf("%d",sum%97);
	return 0;
}
