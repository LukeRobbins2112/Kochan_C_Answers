#include <stdio.h>

int triangularNumber(int num){

  int triNumber = 0;
  
  for (int i = 1; i <= num; i++){
    triNumber += i;
  }
  
  return triNumber;
}


int main(){

  int triangularNumber(int);

  int num;

  printf("Enter a number to get the triangular number\n");
  scanf("%d", &num);

  int triNum = triangularNumber(num);

  printf("The triangular number of %d is %d\n", num, triNum);
  

  return 0;


}
