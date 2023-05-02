#include<stdio.h>
#include¡¶ 
#include<math.h>
int main()
{
	int times[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
	char target[200]={0};
	int i=0,j=0,ans=0,k=0,trans=0;
	gets(target);
	while(target[k]!='\0')
	{
		if(target[k]==' ')
		{
			ans++;
		}
		else
		{
			trans=target[k]-'a';
			ans+=times[trans];
		}
		k++;
	}
	printf("%d",ans);
	return 0;
}
