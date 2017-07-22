#include <stdio.h>

int main(){

  int testNum = 0x80000000;

  printf("Test number: %d\n", testNum);
  
  testNum = testNum >> 16;
  testNum = testNum >> 16;

  printf("Test number after shifting all bits off the right: %d\n", testNum);

  if (testNum)
    printf("Arithmetic shift\n");
  else
    printf("Logical shift\n");

  return 0;
}
