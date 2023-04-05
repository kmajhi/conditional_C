#include <stdio.h>

int main() {
  float physics, chemistry, biology, mathematics, computer, percentage;
  char grade;

  printf("Enter the marks of Physics: ");
  scanf("%f", &physics);

  printf("Enter the marks of Chemistry: ");
  scanf("%f", &chemistry);

  printf("Enter the marks of Biology: ");
  scanf("%f", &biology);

  printf("Enter the marks of Mathematics: ");
  scanf("%f", &mathematics);

  printf("Enter the marks of Computer: ");
  scanf("%f", &computer);

  percentage = (physics + chemistry + biology + mathematics + computer) / 5.0;

  if (percentage >= 90) {
    grade = 'A';
  } else if (percentage >= 80) {
    grade = 'B';
  } else if (percentage >= 70) {
    grade = 'C';
  } else if (percentage >= 60) {
    grade = 'D';
  } else if (percentage >= 40) {
    grade = 'E';
  } else {
    grade = 'F';
  }

  printf("Percentage: %.2f%%\n", percentage);
  printf("Grade: %c\n", grade);

  return 0;
}
