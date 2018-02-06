#include<stdio.h>
void main()
{
    double a,b,c;
    printf("Enter the numbers :");
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("%lf is the largest number",a);
    }
    if(b>a&&b>c)
    {
        printf("%lf is the largest number",b);
    }
    if(c>a&&c>b)
    {
        printf("%lf is the largest number",c);
    }
    return 0;
}
