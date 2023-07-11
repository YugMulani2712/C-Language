#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
clrscr();
i=5;
do
{
j=5;
do
{
printf("%d ",i);
j--;
}
while(j>=1);
printf("\n");
i--;
}
while(i>=1);
getch();
}