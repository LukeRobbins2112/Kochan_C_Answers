#include <stdio.h>
#include <stdbool.h>

int main(){

  int primes[50];
  int p;
  int i;
  primes[0] = 2;
  primes[1] = 3;
  int primeCounter = 2;
  bool isPrime;

  for (p = 5; p <= 50; p = p + 2){
    isPrime = true;

    for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i){

      if (p % primes[i] == 0){
	isPrime == false;
      }
      
      if (isPrime == true){
	primes[primeCounter] = p;
	++primeCounter;
      }
      
    }
    
  }

  for (int i = 0; i < primeCounter; i++){
    printf("%d ", primes[i]);
  }

  return 0;
 
}
