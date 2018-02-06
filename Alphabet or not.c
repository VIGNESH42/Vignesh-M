#include<stdio.h>
void main()
{
char c;
printf("Enter a character: ",c);
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='z'))
{
printf("The character is an Alphabet",c);
}
else
{
printf("This is not an alphabet",c);
}
}
