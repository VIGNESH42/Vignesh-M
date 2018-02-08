#include<stdio.h>
#include<math.h>
int main()
{
    int num,power,value;
    printf("Enter the value:");
    scanf("%d%d",&num,&power);
    value=pow(num,power);
    printf("%d",value);
}
