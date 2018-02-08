#include<stdio.h>
int main()
{
int i,j,s;
printf("Enter the  values :");
scanf("%d %d",&j,&s);
for(i=j;i<s;i++)
{
if(i%2==0)
printf("%d",i);
}
}
