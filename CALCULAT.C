/*				      Author    -:YUG MULANI
				      DOC       -:6 JUNE 2023
				      OBJECTIVE -:To learn arithmetic operator


*/
#include<stdio.h>
#include<conio.h>
void main(){// body(definition)of the function
	   int a,b,c;
	   int choice;
	   clrscr();
	   printf("\n1----------------addition");//calling of the function
	   printf("\n2----------------subtraction");//calling of the function
	   printf("\n3----------------multiplication");//calling of the function
	   printf("\n4----------------division");//calling of the function
	   printf("\n5----------------modulas");//calling of the function
	   printf("\n6----------------exit");//calling of the function
	   printf("\nenter the choice");
	   scanf("%d",&choice);      //storing the value in address of choice
	   switch(choice){
			  case 1:printf("\nenter the number");
				 scanf("%d",&a);
				 printf("\nenter the 2nd number");
				 scanf("%d",&b);
				 c=a+b;
				 printf("\nthe answer is %d",c);
				 break;
			  case 2:printf("\nenter the number");
				 scanf("%d",&a);
				 printf("\nenter the 2nd number");
				 scanf("%d",&b);
				 c=a-b;
				 printf("\nthe answer is %d",c);
				 break;
			  case 3:printf("\nenter the number");
				 scanf("%d",&a);
				 printf("\nenter the 2nd number");
				 scanf("%d",&b);
				 c=a*b;
				 printf("\nthe answer is %d",c);
				 break;
			 case 4:printf("\nenter the number");
				scanf("%d",&a);
				printf("\nenter the 2nd number");
				scanf("%d",&b);
				c=a/b;
				printf("\nthe answer is %d",c);
				break;
			 case 5:printf("\nenter the number");
				scanf("%d",&a);
				printf("\nenter the 2nd number");
				scanf("%d",&b);
				c=a%b;
				printf("\nthe answer is %d",c);
				break;
			 case 6:exit(0);
				break;

      }//end of switch
      getch();


}//end of main
