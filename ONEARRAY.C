#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b[50],c,n;
clrscr();
printf("\n enter number to store ");
scanf("%d",&n);
for(c=0;c<=n;c++){
printf("\nenter array a[%d]",c);
scanf("%d",a[c]);
}
for(c=0;c<=n;c++)
{
printf("\n value of a[%d] = %d ",c,a[c]);
}
for(c=0;c<=n;c++)
{
printf("\nvalue of b[%d] = %d ",c,a[c]);
}
getch();
}