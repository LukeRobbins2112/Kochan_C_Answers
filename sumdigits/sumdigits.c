#include <stdio.h>

int main(){

  int num;
  int sumDigits = 0;
  
  printf("Please enter a positive integer\n");

  scanf("%d", &num);
  int printnum = num;
  
  while (num != 0){
    sumDigits += (num % 10);
    num /= 10;
  }

  printf("The sum of the digits of %d is %d\n", printnum, sumDigits);
  return 0;
}
