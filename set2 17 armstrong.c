#include <stdio.h>
#include <math.h>
 int main()
{
    int n,sum=0,rem=0,cube=0,c;
    printf("Enter a number :");
    scanf("%d", &n);
    c=n;
    while(n!= 0)
    {
        rem=n%10;
        cube=pow(rem, 3);
        sum=sum+cube;
        n=n/10;
    }
    if (sum==c)
    {
        printf ("The given number is an armstrong number");
    }
    else
    {
        printf ("The given number is not an armstrong number");
}
return 0;
    }
