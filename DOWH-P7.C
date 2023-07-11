#include<stdio.h>
#include<conio.h>

void main()
{
char a,b,c=65,d=1;
clrscr();
a=1;
do
{
	b=1;
	do
	{
	if(d%2==0)
	{
	printf("%c ",c+32);
	}
	else
	{
	printf("%c ",c);
	}
	c++;
	b++;
	}
	while(b<=a);
	printf("\n");
	d++;
	a++;
	}
	while(a<=5);
	getch();
	}