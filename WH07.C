#include<stdio.h>
#include<conio.h>
void main()
{
int a,n;
clrscr();
printf("enter the value of n = ");
scanf("%d",&n);

a=2;
while(a<=n)
{
printf("%d \t",a);
a+=2;
}
getch();
}