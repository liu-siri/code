#include<stdio.h>
#include<string.h>
#include<math.h>
void finder(char s[],int arr[],int *sz1);
void finish(char s[],int arr[],int index[],int*sz1,int*sz2);
void printer(int arr[],int index[],int*sz1,int*sz2);
int main()
{
	char s[20]={0};
	int arr[11]={0};
	int index[20]={0};
	int sz_arr=0,sz_index=0;
	int*sz1=&sz_arr;
	int*sz2=&sz_index;
	gets(s);
	finder(s,arr,sz1);
	finish(s,arr,index,sz1,sz2);
	printer(arr,index,sz1,sz2);
	return 0;
}
void finder(char s[],int arr[],int *sz1)
{
	int i=0;
	int tem[10]={0};
	while(s[i]!='\0')
	{
		tem[s[i]-'0']++;
		i++;
	}
	for(i=9;i>=0;i--)
	{
		if(tem[i]!=0)
		{
			arr[*sz1]=i;
			(*sz1)++;
		}
	}
}
void finish(char s[],int arr[],int index[],int*sz1,int*sz2)
{
	int i=0,j=0,flag=0;
	for(i=0;i<11;i++)
	{
		flag=0;
		for(j=0;j<*sz1&&flag==0;j++)
		{
			if(s[i]-'0'==arr[j])
			{
				flag=1;
				index[*sz2]=j;
				(*sz2)++;
			}
		}
	}
}
void printer(int arr[],int index[],int*sz1,int*sz2)
{
	int x=0,y=0;
	printf("int[] arr = new int[]{");
	for(x=0;x<*sz1;x++)
	{
		if(x!=0)
		{
			printf(",");
		}
		printf("%d",arr[x]);
	}
	printf("}\n");
	printf("int[] index = new int[]{");
	for(y=0;y<*sz2;y++)
	{
		if(y!=0)
		{
			printf(",");
		}
		printf("%d",index[y]);
	}
	printf("}");
}
