#include<stdio.h>
#include<conio.h>
void main()
{
int num;
int i,j;
clrscr();

printf("\nenter the num of row = ");
scanf("%d",&num);


for(i=1;i<=num;i++)
{
for(j=0;j<i;j++)
{
printf("%d ",(i+j) % 2);
}
printf("\n");
}
getch();
}