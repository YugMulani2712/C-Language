#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,num;
clrscr();
	printf("\nenter the number of rows = ");
	scanf("%d",&num);

for(a=1;a<=num;a++)
{
for(b=1;b<=a;b++)
{
printf("* ");
}
printf("\n");
}
getch();
}