#include<stdio.h>
int main()
{
	int N=0,i=0,i1=0,M=0,late=0,j=0,j1=0,num=0;
	char ch;
    int test[20020]={0};
	int trial[1010]={0};
	int seat[1010]={0};
	scanf("%d",&N);
	getchar();
	for(i=0;i<N;i++)
	{
		for(i1=16*i;i1<=16*i+15;i1++)
		{
			scanf("%c",&ch);
			num=ch-'0';
			test[i1]=num;
		//	printf("ch=%c",c);
		//	printf("i1=%d\n",i1);
		}//	printf("done\n");
		scanf("%d",&trial[i]);
		scanf("%d",&seat[i]);
		getchar();
	}
	
	scanf("%d",&M);
	for(i=0;i<M;i++)
	{
		scanf("%d",&late);
		j=0;
		do
		{
			if(trial[j]==late)
			{
				for(j1=16*j;j1<=16*j+15;j1++)
				{
					printf("%d",test[j1]);
				}	
				printf(" ");
				printf("%d",seat[j]);
				printf("\n");	
			}
			j++;	
		}
		while(trial[j-1]!=late);
	}
	return 0;
}
