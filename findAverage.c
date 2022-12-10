#include <stdio.h>

int main(void) {
  // Declare variables for the weight and number of items for each item
  float weight1, weight2;
  float num1, num2;
  float average_value;

  // Prompt the user to enter the weight and number of items for each item
  printf("Enter the weight of item 1: ");
  scanf("%f", &weight1);
  printf("Enter the number of items 1: ");
  scanf("%f", &num1);
  
  printf("Enter the weight of item 2: ");
  scanf("%f", &weight2);
  printf("Enter the number of items 2: ");
  scanf("%f", &num2);

  // Check for division by zero and return an error message if necessary
  if (num1 == 0 || num2 == 0) {
    printf("Error: Cannot divide by zero.\n");
    return 1;
  }

	average_value = (((weight1 * num1) + (weight2 * num2))/(num1 + num2));
	printf("Average is : %f ",average_value);

  return 0;
}
