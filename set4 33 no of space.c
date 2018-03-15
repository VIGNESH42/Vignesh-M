#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int c=0,i;
	printf("Enter the string:",str);
    scanf("%[^\n]s",str);
    int l;
    l=strlen(str);
	for (i = 0; i<l; i++)
		if (str[i] == ' ')
		c++;
	printf("The no.of space is %d",c);
	return 0;
}
