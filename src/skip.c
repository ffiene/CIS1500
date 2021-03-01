/*
Jennifer Fiene
jfiene@uoguelph.ca
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  //Variable initialization
  int start;
  int end;
  int skip;
  //int absSkip;
  int absDifference;

  //Asking the user for a start, end and skip number
  printf("Please enter a start number: ");
  scanf("%d", &start);

  printf("Please enter an end number: ");
  scanf("%d", &end);

  printf("Please enter a skip value: ");
  scanf("%d", &skip);

  //Getting the absolute value of the skip number and storing it in a variable
  //absSkip = abs(skip);

  absDifference = abs((end - start));

  //Error checking for valid skip numbers
  if (skip < 0 && end > start) {
    printf("Error: If skip number is negative, start must be less than the end number.\n");
    return 1;
  } else if (skip > 0 && end < start) {
    printf("Error: If skip number is positive, start must be greater than the end number.\n");
    return 1;
  } else if (skip == 0) {
    printf("Error: Skip number must not be zero.\n");
    return 1;
  } else if (absDifference <= skip) {
    printf("Error: Difference between start and end numbers must be less than the skip value.\n");
    return 1;
  }

  printf("For loop next. Start = %d end = %d skip = %d\n", start, end, skip);

  if (start < end) {
    printf("start less than end");
  }
  /*
  For loop that adds the skip number to the start value until the end
  value is reached. Prints the current number each time it does this.
  */
  for (int i = start; i < end; i = i + (skip)){
    printf("For loop started");
    printf("%d\n", i);
  }

  return 0;
}
