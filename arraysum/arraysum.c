#include <stdio.h>

int sumArray(int arr[], int len){

  int sum = 0;

  for (int i = 0; i < len; i++){
    sum += *arr++;
  }

  return sum;
}

int main(){

  int arr[10];
  int sum = 0;

  printf("Please enter in 10 digits to be summed\n");

  for (int i = 0; i < 10; i++){
    scanf("%d", (arr + i));
  }

  sum = sumArray(arr, 10);

  printf("The sum of your digits is %d\n", sum);

  return 0;
    
}

//teeteteete
