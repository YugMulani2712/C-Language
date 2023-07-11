#include<stdio.h>
#include<conio.h>
void prime (int n);

void main(){
	int number;
	clrscr();
	printf("\nenter the number = ");
	scanf("%d",&number);
	prime(number);
	getch();
}

void prime(int n){
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%1==0)
		{
		flag=1;
		}
		}
		if(flag==1)
		{
		printf("\nnumber is not prime");
		}
		else
		{
		printf("\nnumber is prime");
		}
	}