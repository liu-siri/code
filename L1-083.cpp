#include<stdio.h>
void line1print(int a,int no,int mode);
void change(int age[],int num[]);
int judger(int age[],int yes,int no);
int main()
{
    int age[4]={0};
    int num[4]={0};num[1]=1,num[2]=2;
    int ori[4]={0};
    int no=0,yes=0,mode=0;
    scanf("%d %d %d %d",&no,&yes,&age[1],&age[2]);
    ori[1]=age[1],ori[2]=age[2];
    change(age,num);//prioritize
	mode=judger(age,yes,no);
    line1print(ori[1],no,mode);
    printf(" ");
    line1print(ori[2],no,mode);
    printf("\n");
    switch(mode)
    {
        case 1:{printf("zhang da zai lai ba");break;}
        case 2:{printf("%d: huan ying ru guan",num[2]);break;}
        case 3:{printf("qing %d zhao gu hao %d",num[2],num[1]);break;}
        case 4:{printf("huan ying ru guan");}
    }
    return 0;
}
void line1print(int a,int no,int mode)
{
    if(mode==3)
    {
		printf("%d-Y",a);
	}
	else
	{
		if(a<no)
	    {
	        printf("%d-N",a);
	    }
	    else
	    {
	        printf("%d-Y",a);
	    }
	}
}
void change(int age[],int num[])
{
    int t=0;
    if(age[1]>age[2])
    {
        t=age[1];
        age[1]=age[2];
        age[2]=t;
        t=num[1];
        num[1]=num[2];
        num[2]=t;
    }
}
int judger(int age[],int yes,int no)
{
    if(age[2]<no)return 1;
    else if((age[2]>=no&&age[2]<yes)&&age[1]<no)return 2;
    else if(age[2]>=yes&&age[1]<no)return 3;
    else if(age[2]>=no&&age[1]>=no)return 4;
}
