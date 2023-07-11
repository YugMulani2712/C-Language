#include<stdio.h>
#include<conio.h>
void main()

{
	int a,n,i;
	clrscr();

	printf("enter the value of n = ");
	scanf("%d",&n);
	i=1;

	do
	{
	a=i+i;
	printf("%d",a);
	i++;
	}
	while(a<=n);
	getch();
	}

