#include<stdio.h>
#include<conio.h>
void main(){
	int arr[100],i,j,count=0,size;
	clrscr();
	printf("enter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nenter the element in arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nthe elements of an array are ");
	for(i=0;i<size;i++)
	{
	printf("\n%d",arr[i]);
	}

	for(i=0;i<size;i++)
	{
	for(j=i+1;i<size;i++)
	{
	if(arr[i]==arr[j])
	{
	count++;
	}
	}
	}
	printf("\ntotal number of duplicate elements are=%d",count);
	getch();
	}
