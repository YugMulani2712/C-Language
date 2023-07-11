#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();

printf("enter the value of a ");
scanf("%d",&a);

printf("enter the value of b ");
scanf("%d",&b);

printf("enter the value of c ");
scanf("%d",&c);

printf("%d",&a>b?a>c?a:c:b>c?b:c);

getch();
}