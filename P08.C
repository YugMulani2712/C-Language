#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c =65,d=1;
clrscr();
for(a = 1; b <= a; b++)
{
if(b % 2 == 1)
{
printf("%c ",c + 32);
}
else
{
printf("%c ",c);
}
c++;
}
printf("\n");
}
getch();
}