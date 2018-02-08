#include<stdio.h>
int main()
{
    int i,j,k=0;
    printf("Enter the number=");
    scanf("%d",&i);
    j=i;
  while(j!=0)
  {
   j=j/10;
   ++k;
  }
  printf("Numbers of digits for  %d=%d",i,k);
}
