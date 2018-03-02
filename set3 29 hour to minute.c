#include <stdio.h>
void main()
{
	int min;
	int h,m;
	scanf("%d",&min);
	h=min/60;
	m=min%60;
	printf("The hour is %d\n",h);
	if(min%60==0)
	{
	printf("The minutes is 0" );
	}
	else
	printf("The minutes is %d",m);
}
