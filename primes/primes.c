#include <stdio.h>

int main(){

  int p;
  int d;
  _Bool isPrime;

  for (p = 2; p <= 50; p++){

    isPrime = 1;
    
    for (d = 2; d < p; d++){
      if (p % d == 0)
	isPrime = 0;
    }

    if (isPrime)
      printf("%d ", p);
    
  }

  printf("\n");
  return 0;
  
}
  