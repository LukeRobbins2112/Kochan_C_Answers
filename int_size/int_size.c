#include <stdio.h>

int main(){

  int int_size();

  printf("The size of an int is %d\n", int_size());

  return 0;

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

  
