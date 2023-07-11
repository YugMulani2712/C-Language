#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,i,sum=0;
clrscr();
printf("enter the value of n = ");
scanf("%d",&n);
a=1;
while(a<=n)
{
i=a+25;
printf("%d\t",i);
a++;
sum+=i;
}
printf("\sum %d ",sum);
getch();
}