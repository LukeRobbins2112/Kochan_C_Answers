#include <stdio.h>

int main(){

  int numbers[15];

  numbers[0] = 0;
  numbers[1] = 1;

  for (int i = 2; i < 15; i++){

    numbers[i] = numbers[i-1] + numbers[i-2];
    
  }

  for (int i = 0; i < 15; i++){

    printf("%d\n", numbers[i]);

  }

  return 0;
  

}
