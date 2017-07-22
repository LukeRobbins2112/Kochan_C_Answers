#include <stdio.h>

int main(){

  int bit_test(unsigned int num, int n);
  int bit_set(unsigned int num, int n);
  
  int input;
  int bitNum;
  
  printf("Please enter in a number: ");
  scanf("%d", &input);
  printf("Please enter in the bit number: ");
  scanf("%d", &bitNum);
  
  if (bit_test(input, bitNum))
    printf("The bit is on\n");
  else{
    printf("The bit is off\n");
    printf("The number before changing bit: %d\n", input);
    printf("The number after changing bit: %d\n", bit_set(input, bitNum));
  }
  
}


int bit_test(unsigned int num, int n){

  int result = ((num >> n) & 1);
  if (result)
    return n;
  else
    return 0;
}

int bit_set(unsigned int num, int n){

  if (!bit_test(num, n)){
    num |= (1 << n);
  }

  return num;
}
