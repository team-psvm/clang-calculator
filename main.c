#include <stdio.h>

#include "fun.h"

int main() {
  while (true) {
    print_menu();

    int option;
    printf("Enter your choice: ");
    scanf("%d", &option);

    if (is_exit(option)) {
      printf("Exiting...\n");
      return 0;
    }
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (option) {
      case ADDITION:
        printf("Addition: %d\n", add(num1, num2));
        break;
      case SUBTRACTION:
        printf("Subtraction: %d\n", subtract(num1, num2));
        break;
      case MULTIPLICATION:
        printf("Multiplication: %d\n", multiply(num1, num2));
        break;
      case DIVISION:
        printf("Division: %d\n", divide(num1, num2));
        break;
      default:
        printf("Invalid option\n");
    }
    putchar('\n');
  }
  return 0;
}