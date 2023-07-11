#include <stdio.h>

int total_marks = 0;

int calculate_total_marks(int student_no) {
  if (student_no == 3) {
    return total_marks;
  } else {
    int sub_1_marks, sub_2_marks, sub_3_marks;
    printf("Enter the marks of subject 1 for student %d: ", student_no + 1);
    scanf("%d", &sub_1_marks);
    printf("Enter the marks of subject 2 for student %d: ", student_no + 1);
    scanf("%d", &sub_2_marks);
    printf("Enter the marks of subject 3 for student %d: ", student_no + 1);
    scanf("%d", &sub_3_marks);

    total_marks += sub_1_marks + sub_2_marks + sub_3_marks;
    return calculate_total_marks(student_no + 1);
  }
}

int main() {
  int student_no = 1;
  total_marks = 0;

  printf("The total marks of 3 students in 3 subjects are: ");
  printf("%d\n", calculate_total_marks(student_no));
  return 0;
} 