#include<stdio.h>
#include<conio.h>
void main()
{
		int a,b;
		clrscr();
		a=1;
		while(a<=5)
		{
		b=1;
		while(b<=a)
		{
		printf("%d",a);
		b++;
		}
		printf("\n");
		a++;
		}
		getch();
		}