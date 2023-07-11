#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,n,i,b=1,c;
clrscr();

printf("enter the value of n = ");
scanf("%d",&n);

i=1;
while(i<=n)
{
if(i==1)
{
printf("%d",b);
}
else
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
i++;
}
getch();
}