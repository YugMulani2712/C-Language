#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,sum=0;
clrscr();
printf("enter the value of n = ");
scanf("%d",&n);

a=1;
do
{
i=a*2-1;
printf("%d \t",i);
a++;
sum+=i;
}
while(a<=n);
printf("\nsum : %d",sum);
getch();
}