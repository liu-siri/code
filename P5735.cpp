#include<stdio.h>
#include<math.h>
typedef struct tri
{
	double pos[3][2];
	double len[3];
	double p;
	double l;
}t;
void cal(t* p);
int main()
{
	int i=0;
	t tri1={0};
	t* p=&tri1;
	for(i=0;i<3;i++)
	{
		scanf("%lf %lf",&(*p).pos[i][0],&(*p).pos[i][1]);
	}
	cal(p);
}
void cal(t* p)
{
	int i=0,twice=0;
	double sum=0;
	for(i=0;i<3;i++)
	{
		if(i==2)
		{
			twice=pow((p->pos[2][0]-p->pos[0][0]),2.0)+pow((p->pos[2][1]-p->pos[0][1]),2.0);
			p->len[2]=sqrt(twice);
		}
		else
		{
			twice=pow((p->pos[i][0]-p->pos[i+1][0]),2.0)+pow((p->pos[i][1]-p->pos[i+1][1]),2.0);
			p->len[i]=sqrt(twice);
		}
	}
	for(i=0;i<3;i++)
	{
		sum+=p->len[i];
	}
	printf("%.2lf",sum);
}
