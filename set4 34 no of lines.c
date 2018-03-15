#include <stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int i,count=1;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i] == '.')
		count++;
	}
	printf("No.of lines in paragraph is %d",count);
	return 0;
}
