/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float mark1, mark2;

  printf("Marks of the first subject :  ");
  scanf("%f", &mark1);

  printf("Marks of the second subject :  ");
  scanf("%f", &mark2);

  printf("\nThe average mark is : %.2f\n", (mark1 + mark2) / 2.0);
  
  return 0;
}

