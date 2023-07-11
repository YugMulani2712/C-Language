#include<stdio.h>
#include<conio.h>
void main()
{
int a,n;
clrscr();
printf("\nenter the value of n = ");
scanf("%d",&n);
a=1;
while(a<=n)
{
printf(" %d\t",a);
a++;
}
getch();
}