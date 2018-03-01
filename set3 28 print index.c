#include<stdio.h>
int main()
{
int i,a[100],n;
printf("Enter the value of n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]); 
}
for(i=0;i<n;i++)
{
printf("%d%d\n",a[i],i);
}
}
