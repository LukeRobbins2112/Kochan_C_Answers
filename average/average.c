
#include <stdio.h>

int main(){

  float numbers[10];
  float sum;
  float entry;

  printf("Please enter 10 floating point numbers to be averaged.\n");

  for (int i= 0; i < 10; i++){
    scanf("%f", &entry);
    numbers[i] = entry;
    sum += numbers[i];
  }

  printf("The average of the numbers ");
  for (int i = 0; i < 10; i++){
    printf("%.2f ", numbers[i]);
  }
  printf("\n");
  printf("Equals %.2f\n", sum/10);
 
  
  return 0;

}
