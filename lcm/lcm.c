#include <stdio.h>


int gcd(int u, int v){
  int temp;

  while (v !=0){
    temp = u % v;
    u = v;
    v = temp;
  }
  return u;
}


int lcm(int u, int v){
  return (u*v)/gcd(u,v);
}

int main(){

  int u;
  int v;
   
  
  printf("Please enter in two numbers to find the LCM and GCD\n");
  scanf("%d %d", &u, &v);
  printf("\n");

  printf("The LCM is %d\n", lcm(u,v));
  printf("The GCD is %d\n", gcd(u,v));

  return 0;
}
