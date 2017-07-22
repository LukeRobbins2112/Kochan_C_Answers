#include <stdio.h>

int main(){

  printf("Factorials of Numbers 1-10\n");
  printf("Number\tFactorial\n");
  printf("___________________________\n");


  for (int i = 1; i <= 10; i++){

    int sum = 1;
    
    printf("%d! = ", i);
    
    for (int j = i; j > 1; j--){

      printf("%d x ", j);
      sum *= j;
    }
    printf("1 = %d\n", sum);

    
  }
  
  return 0;

}
