/*


                        author:- dhruv mulani
                        doc:-  today
                        topic :- indian curency arrange
*/



#include <stdio.h>
#include <conio.h>

int main() {
    int amount, notes;
    clrscr();
    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Indian currency denominations for the given amount are:\n");

    notes = amount / 2000;
    if (notes > 0) {
	printf("2000 ---> %d\n", notes);
	amount = amount % 2000;
    }

    notes = amount / 500;
    if (notes > 0) {
	printf("500 ----> %d\n", notes);
	amount = amount % 500;
    }

    notes = amount / 200;
    if (notes > 0) {
	printf("200 ----> %d\n", notes);
	amount = amount % 200;
    }

    notes = amount / 100;
    if (notes > 0) {
	printf("100 ----> %d\n", notes);
	amount = amount % 100;
    }

    notes = amount / 50;
    if (notes > 0) {
	printf("50 ----> %d\n", notes);
	amount = amount % 50;
    }

    notes = amount / 20;
    if (notes > 0) {
	printf("20 ----> %d\n", notes);
	amount = amount % 20;
    }

    notes = amount / 10;
    if (notes > 0) {
	printf("10 ----> %d\n", notes);
	amount = amount % 10;
    }

    notes = amount / 5;
    if (notes > 0) {
	printf("5 ----> %d\n", notes);
	amount = amount % 5;
    }

    notes = amount / 2;
    if (notes > 0) {
	printf("2 ----> %d\n", notes);
	amount = amount % 2;
    }

    notes = amount / 1;
    if (notes > 0) {
	printf("1 ----> %d\n", notes);
    }
    getch();
    return 0;
}