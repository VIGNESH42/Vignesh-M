#include<stdio.h>
#include<conio.h>
void main()
{
  char b[1000];
    int i,l=0,count=0;
    scanf("%s",b);
    l=strlen(b);
    for(i=0;i<l;i++)
if(b[i]>='0' && b[i]<='9')
{
count++;
}
printf("%d",count);
	return 0;
}
