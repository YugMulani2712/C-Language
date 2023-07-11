#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,num;
	clrscr();

	printf("\nenter the number of rows = ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
	for(j=num;j>=i;j--)
	{
	printf("* ");
	}
	printf("\n");
	}
	getch();
	}