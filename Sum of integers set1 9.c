#include<stdio.h>
int main()
{
    int i,a,b,sum=0;
    int array[5];
    printf("Enter the size of array :");
    scanf("%d",&a);
    printf("How many value do you want to find :");
    scanf("%d",&b);
    printf("Enter the array :");
    for(i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
        }
        for(i=0;i<b;i++)
        {
            sum+=array[i];
        }
        printf("%d",sum);
        
    
}
