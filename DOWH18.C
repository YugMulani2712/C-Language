#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();

i=65;
do
{
printf("%c ",i);
i+=2;
}
while(i<=90);
getch();
}