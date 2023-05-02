#include<stdio.h>
int main()
{
	char cha[60]={0};
	int n=0,i=0;
	scanf("%d",&n);
	getchar();
	getchar();
	n=n%26;
	gets(cha);
	while(cha[i]!='\0')
	{
		if((cha[i]+n)>'z')
		{
			cha[i]=cha[i]+n-'z'+'a'-1;
		}
		else
		{
			cha[i]=cha[i]+n;
		}
		i++;
	}
	puts(cha);
	return 0;
}
