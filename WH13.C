#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,sum=0;
clrscr();
printf("enter the value of n = ");
scanf("%d",&a);

a=1;
while(a<=n)
{
i=a*2;
printf("%d \t",i);
a++;
sum+=i;
}
printf("\n sum :%d \t",sum);
getch();
}