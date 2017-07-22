#include <stdio.h>

double absoluteValue(double x){
  if (x < 0)
    x = -x;
  
  return (x);
}

double squareRoot(double x){
  double guess = 1;
  double epsilon = 0.0001;

  while (absoluteValue((guess*guess)/x - 1) >= epsilon){
    guess = (x / guess + guess)/2.0;
  }

  return guess;
}

void isPrime(int num){

  _Bool isPrime = 1;
  int lastToCheck = squareRoot(num);
    
    for (int i = 2; i <= lastToCheck; i++){
      if (num % i == 0)
	isPrime = 0;
    }

    if (isPrime)
      printf("%d is prime\n", num);
    else
      printf("%d is not prime\n", num);
}

int main(){

  int num = 1;
  
  while (num != 0){
    printf("Enter a number to check if it's prime (0 to end)\n");
    scanf("%d", &num);
    isPrime(num);
  }

  return 0;
}
