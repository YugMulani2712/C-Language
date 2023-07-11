#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("enter year");
scanf("%d",&year);
if(year%4==0);
{
printf("leap year");
}
else
{
printf("bin leap year");
}
getch();
}