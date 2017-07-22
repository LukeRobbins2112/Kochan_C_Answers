#include <stdio.h>

int main(){
  unsigned int w1 = 0xabcdef00u;
  unsigned int w2 = 0xffff1122u;
  unsigned int rotate (unsigned int value, int n);

  printf("%x\n", rotate(w1, 8));
  printf("%x\n", rotate(w1, -16));
  printf("%x\n", rotate(w2, 4));
  printf("%x\n", rotate(w2, -2));
  printf("%x\n", rotate(w1, 0));
  printf("%x\n", rotate(w1, 44));

  return 0;
}

unsigned int rotate(unsigned int value, int n){

  unsigned int result, bits;
  int int_size();

  int intSize = int_size();

  if (n > 0)
    n = (n % intSize);
  else
    n = -(-n % intSize);

  if (n == 0)
    result = value;
  else if (n > 0){
    bits = value >> (intSize - n);
    result = (value << n) | bits;
  }
  else{
    n = -n;
    bits = value << (intSize - n);
    result = (value >> n) | bits;
  }

  return result;
  
}


int int_size(){

  int size = 0;

  int testNum = ~0;

  while(testNum){
    size++;
    testNum <<= 1;
  }

  return size;  
}



