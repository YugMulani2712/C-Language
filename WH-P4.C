#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
i=1;
k=1;
while(i<=5)
{

j=1;
while(j<=i)
{
printf("%2d ",k);
k++;
j++;
}
printf("\n");
i++;
}
getch();
}