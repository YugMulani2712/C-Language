#include <stdio.h>
#include<conio.h>
void main()
{
int a,sum=0;
clrscr();
for(a=1;a<=10;a++)
{
sum=sum+a;
printf("%d\t",a);
}
printf("\n your sum is %d",sum);
getch();
}