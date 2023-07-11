#include<stdio.h>
#include<conio.h>
void main()
{
char c;
clrscr();
for(c=65;c<=90;++c)
{
printf("%c=%c\t",c,c+32);
}
getch();
}