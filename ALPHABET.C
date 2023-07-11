#include<stdio.h>
#include<conio.h>

void main()
{
	char ch;
	clrscr();

	printf("enter an alphabet ");
	scanf("%c",&ch);

	if(ch>='A' && ch<='Z')
	{

	printf("%c is in upper case ",ch);
	}
	else if(ch>='a' && ch<='z')
	{
	printf("%c is lower case",ch);
	}
	else
	{
	printf("it is not an alphabet");
	}
	getch();
	}