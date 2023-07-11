
/*


			AUTHOR     :- Yug Mulani
			DOC        :- 12 june 2023
			OBJECTIVE  :- CHECK TRIANGLE WITH ANGLES
*/

#include <stdio.h>
#include<conio.h>

int main() {
    int angle1, angle2, angle3;
    clrscr();
    // Input the angles of the triangle
    printf("Enter the angles of the triangle (angle1, angle2, angle3): ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Check if the triangle is valid
    if (angle1 + angle2 + angle3 == 180) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    getch();
}