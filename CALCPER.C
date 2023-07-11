/*


			author:- dhruv mulani
			doc:-  today
			topic :- calculate grade of marks
*/



#include <stdio.h>
#include <conio.h>

int main() {
    int phy,chem,maths,bio,com, final;
    clrscr();
    printf("please enter the marks of physics ");
    scanf("%d",&phy);
    printf("please enter the marks of chemistry ");
    scanf("%d",&chem);
    printf("please enter the marks of mathematics ");
    scanf("%d",&maths);
    printf("please enter the marks of biology ");
    scanf("%d",&bio);
    printf("please enter the marks of computer ");
    scanf("%d",&com);

    final = phy + chem + maths + bio + com / 500     ;

    printf("\nphysics = %d",phy);
    printf("\nchemistry = %d",chem);
    printf("\nmathematics = %d",maths);
    printf("\nbiology = %d",bio);
    printf("\ncomputer = %d",com);
    printf("\noutput percentage = %d",final);
    if(final>=90) {
	printf("GRADE A");
    }
    else if(final>=80) {
	printf("GRADE B");
    }
   else if(final>=70) {
	printf("GRADE C");
    }
    else if(final>=60) {
	printf("GRADE D");
    }
    else if(final>=40) {
	printf("GRADE E");
    }
    else if(final<40) {
	printf("GRADE F");
    }

    getch();
   }