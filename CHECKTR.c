
/*


                        author:- dhruv mulani
                        doc:-  today
                        topic :- triangle is original or not valid???
*/


#include <stdio.h>
#include<conio.h>

int main() {
    int a, b, c;
    clrscr();
    // Input the sides of the triangle
    printf("Enter the sides of the triangle (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the triangle is valid
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    getch();
}