#include <stdio.h>

double absoluteValue(double x){
  if (x < 0)
    x = -x;
  
  return (x);
}

double squareRoot(double x, const double epsilon){
  double guess = 1;

  while (absoluteValue((guess*guess)/x - 1) >= epsilon){
    guess = (x / guess + guess)/2.0;
    printf("%lf\n", guess);
  }

  return guess;
}

int main(){

  double epsilon;
  
  printf("Epsilon value: ");
  scanf("%lf", &epsilon);
  printf("\n");
  
  printf("SquareRoot(2.0) = %lf\n", squareRoot(2.0, epsilon));
  printf("SquareRoot(144.0) = %lf\n", squareRoot(144.0, epsilon));
  printf("SquareRoot(17.5) = %lf\n", squareRoot(17.5, epsilon));

  return 0;
}
