#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c =65,d=1;
clrscr();
for(a = 1; a <= 5; a++)
{
for(b = 1; b<= a; b++)
{
if(d % 2 == 0)
{
printf("%c ",c + 32);
}
else
{
printf("%c ",c);
}
c++;
}
d++;
printf("\n");
     }
getch();
}
