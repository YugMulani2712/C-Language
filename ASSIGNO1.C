#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
for(i=0;i<26;i++)
{
printf("%c=%d\t",'A'+i,'A'+i);
}
getch();
}