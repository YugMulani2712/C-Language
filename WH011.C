#include<stdio.h>
#include<conio.h>
void main()
{
int a,sum=0;
clrscr();

a=1;
while(a<=10)
{
sum+=a;
printf("%d \t",a);
a++;
}
printf("\sum :%d",sum);
getch();
}