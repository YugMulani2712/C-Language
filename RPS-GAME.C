#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int i,num,choice,round,self=0,computer=0;
	clrscr();
	printf("\nEnter 1 for rock");
	printf("\nEnter 2 for paper");
	printf("\nEnter 3 for sessior");
	printf("\nEnter the number of rounds = ");
	scanf("%d",&round);

	for(i=1;i<=round;i++)
	{
		printf("\nEnter your choice = ");
		scanf("%d",&choice);
		num=(rand()%3)+1;
		printf("%d",num);
		if(choice==num)
		{
			printf("\nyou both choose same please try again");
		}
		else if(choice==1 && num==2)
		{
			printf("\nyou choose rock and computer choose paper so....");
			printf("\ncomputer won");
			computer++;
		}
		else if(choice==1 && num==3)
		{
			printf("\nyou choose rock and computer choose sessior so....");
			printf("\nyou won");
			self++;
		}
		else if(choice==2 && num==1)
		{
			printf("\nyou choose paper and computer choose rock so....");
			printf("\nyou won");
			self++;
		}
		else if(choice==2 && num==3)
		{
			printf("\nyou choose paper and computer choose sessior so....");
			printf("\ncomputer won");
			computer++;
		}
		else if(choice==3 && num==1)
		{
			printf("\nyou choose sessior and computer choose rock so....");
			printf("\ncomputer won");
			computer++;
		}
		else if(choice==3 && num==2)
		{
			printf("\nyou choose sessior and computer choose paper so...");
			printf("\nyou won");
			self++;
		}
	}//end of for
	printf("\nyour score is = %d",self);
	printf("\ncomputer score is = %d",computer);

	if(self==computer)
	{
		printf("\n\nthe game is draw");
	}
	else if(self>computer)
	{
		printf("\n\n\nyou are the winner");
	}
	else if(self<computer)
	{
		printf("\n\n\n\ncomputer is the winner");
	}
	getch();
	}
