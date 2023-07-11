#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,c=0,size;
	clrscr();
	printf("enter the size of array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
	printf("enter the array a[%d] = ",i);
	scanf("%d",a[i]);
	}
	for(i=0;i<size;i++)
	{
	printf("%d",a[i]);
	}
	for(i=0;i<size;i++)
	{
	for(j=i+1;j<size;j++)
	{
	if(a[i]==a[j])
	{
	c++;
	break;
	}
	}
	}
	printf("\nunique number of elements = %d  ",size-c);
	getch();
	}
