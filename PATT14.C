#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,rows=5;
clrscr();
for(a=1;a<=rows;a++)
{
	for(b=1;b<=rows;b++)
	{
	if(b<=rows-a){
	printf(" ");
	}
	else{
	printf("* ");
	}
	}
	printf("\n");
	}
	getch();
	}