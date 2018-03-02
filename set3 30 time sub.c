#include <stdio.h>
void main()
{
	int a,b,c,d,m1,m2,tm1,tm2,sub,r,r1;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	m1=a*60;
	m2=c*60;
	tm1=m1+b;
	tm2=m2+d;
	sub=tm1-tm2;
	r=sub/60;
	printf("%d\t",r);
	r1=sub%60;
	if(r1==0)
	{
	printf("0");
	}
	else
	printf("%d",r1);
	}
