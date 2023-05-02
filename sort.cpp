#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
typedef struct{
	int a;
	double b;
	char c[20];
}s;
bool cmp1(const int a,const int b);
bool cmp2(s s1,s s2);
int main()
{
	/*int i=0;
	int arr[11]={0};
	for(i=0;i<=10;i++)
	{
		arr[i]=i;
			printf("%d ",arr[i]);	
	}
	printf("\n");
	sort(arr,arr+11,cmp1);
	for(i=0;i<=10;i++)
		printf("%d ",arr[i]);*/
	int i=0; 
	s s[3]={0};
	s[1].a=1,s[1].b=2.3;
	gets(s[1].c);
	//getchar();
	s[2].a=1,s[2].b=2.3000001;
	gets(s[2].c);
	sort(&s[1],&s[1]+2,cmp2);
	
		printf("%d %d %s\n",s[1].a,s[1].b,s[1].c);

	return 0;
}
bool cmp1(const int a,const int b)
{
	return a>b;
}
bool cmp2(s s1,s s2)
{
	if(s1.a!=s2.a)return s1.a<s2.a;
	if(fabs(s1.b-s2.b)>0.000001)return s1.b>s2.b;
	return strcmp(&s2.c[0],&s1.c[0]);
}
