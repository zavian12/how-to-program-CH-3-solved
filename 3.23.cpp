#include <stdio.h>

int main(void) {
  int counter = 0;
  int largest = 0;
  while (counter < 10) {
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);
    if (number > largest) {
      largest = number;
    }
    counter++;
  }
  printf("The largest number is: %d\n", largest);
  return 0;
}
