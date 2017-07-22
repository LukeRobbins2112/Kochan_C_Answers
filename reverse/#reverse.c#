#include <stdio.h>

int main(){

  int number;
  int right_digit;
  _Bool isNegative = 0;

  printf("Please enter a number: ");
  scanf("%d", &number);

  if (number < 0){
      isNegative = 1;
      number = -number;
    }
  
  while (number != 0){
    right_digit = number % 10;
    printf("%d", right_digit);
    number /= 10;
  }
  
  if (isNegative)
    printf("-");

  printf("\n");

  return 0;
  




}
