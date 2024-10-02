#include <stdio.h>

int main() {
  int age;
  float height;
  char grade;

  printf("Enter age: ");
  scanf("%d", &age);

  printf("Enter height: ");
  scanf("%f", &height);

  printf("Enter grade: ");
  scanf(" %c", &grade);

  printf("Age: %d\n", age);
  printf("Height: %2.f\n", height);
  printf("Grade: %c\n", grade);

  return 0;
}