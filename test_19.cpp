#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	int i=0,j=0,n=0;
	int arr_1[6]={1,2,3,4,5,6};
	int arr_2[10];

	int size=strlen(arr_1[6])/sizeof(arr_1[0]);
	for(n=0;n<3;n++)
	{
		for(i=0;((getchar())!="\n");i++)
		{
			int arr_2[i]=getchar();
		}
		for(j=0;j<size;j++)
		{
			if(arr_1[j]!=arr_2[j])
			{
				break;
			}
		}
		if(arr_1[j]!=arr_2[j])
			{
				printf("incorrect");
				continue;
				system("pause");
			}
		else
		{	
		  printf("succeed");
		  break;
		}
	}
	return 0;
}
