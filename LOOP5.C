#include<stdio.h>

void main()
{
int a,n;
clrscr();
printf("enter the value of n ");
scanf("%d",&n);

for(a=n;a>=-n;a--)
{
printf("\n%d",a);
}
getch();
}