#include<stdio.h>
#include<conio.h>
void main()
{
char a,b,c=64;
clrscr();
for(a=65;a<=69;a++)
{
for(b=65;b<=a;b++)
{
c++;
printf(" %c",c);
}
printf("\n");
if(c>=65 && c<=90)
{
c+=32;
}
else
{
c-=32;
}
}
getch();
}