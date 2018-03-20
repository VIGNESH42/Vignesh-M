#include <stdio.h>
#include<conio.h>
void main()
{
	char a[1000];
	int count=0,i;
	printf("Enter the string : ");
	scanf("%[^\n]s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z');
		else
		count++;
	}
	printf("%d",count);
	getch();
}
