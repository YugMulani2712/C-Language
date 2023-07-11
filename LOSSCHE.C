/*


			author:- dhruv mulani
			doc:-  today
			topic :- check profit loss!~!
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	 int cost,selling;
	 clrscr();
	 printf("\nplease enter your cost ");
	 scanf("%d",&cost);
	 printf("\nplease enter your selling price ");
	 scanf("%d",&selling);
	 if(selling-cost<0){
		printf("\nyou are loss with %d",selling-cost);
	 }
	 else if(selling-cost>0){
		printf("\nyou are profit with %d",selling-cost);
	 }
	 if(selling-cost==0){
		printf("\nyou are not in loss and profit");
	 }
	 getch();

}