#include <stdio.h>

int main(){

  float value1;
  float value2;
  char operator;

  printf("Please type your expression\n");
  scanf("%f %c %f", &value1, &operator, &value2);

  switch(operator){

  case '+':
    printf("%.2f\n", value1 + value2);
    break;
  case '-':
    printf("%.2f\n", value1 - value2);
    break;
  case '*':
    printf("%.2f\n", value1 * value2);
    break;
  case '/':
    if (value2 == 0)
      printf("Division by zero.");
    else
      printf("%.2f\n", value1 / value2);
    break;
  default:
    printf("Invalid operator");
  }
  
  return 0;
}  
