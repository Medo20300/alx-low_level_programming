#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // Check if there is one command line argument
  if (argc != 2) {
    printf("Usage: %s <number>\n", argv[0]);
    return 1;
  }

  // Convert the command line argument to an integer
  int number = atoi(argv[1]);

  // Check if the number is negative
  if (number < 0) {
    printf("Factorial of negative numbers is not defined.\n");
    return 1;
  }

  // Compute the factorial of the number
  int factorial = 1;
  for (int i = 1; i <= number; i++) {
    factorial *= i;
  }

  // Print the factorial of the number
  printf("The factorial of %d is %d.\n", number, factorial);

  return 0;
}
