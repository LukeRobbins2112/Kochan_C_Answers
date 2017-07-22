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

void quadraticEquation(){

  
  float x1;
  float x2;
  float a;
  float b;
  float c;
  
  
  printf("Please enter your values\n");
  printf("a: ");
  scanf("%f", &a);
  printf("b: ");
  scanf("%f", &b);
  printf("c: ");
  scanf("%f", &c);

  float discriminant = squareRoot(b*b - 4*a*c);

  if (discriminant < 0){
    printf("Roots are imaginary.");
    return;
  }

  x1 = (-b + discriminant)/(2*a);
  x2 = (-b - discriminant)/(2*a);

  printf("The two roots are: %.2f and %.2f\n", x1, x2);
  
}

int main(){

  quadraticEquation();

  return 0;
}
