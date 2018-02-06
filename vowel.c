#include<stdio.h>
void main()
{
char c;
int islvowel,isvowel;
printf("Enter a letter: ");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
{
printf("The letter is vowel",c);
}
else if((c>='a'&&c<='z')||(c>='A'&&c<='z'))
{
printf("The letter is consonant",c);
}
else
{
printf("This is not an alphabet",c);
}
}
