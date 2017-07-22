#include <stdio.h>

int main(){

  int first;
  int second;
  
  printf("Please enter in two numbers\n");
  scanf("%d %d", &first, &second);

  if (first % second == 0)
    printf("first is divisible by second\n");
  else
    printf("First is not divisible by second; the remainder is %d\n", first%second);

  return 0;
    
  
}

  
