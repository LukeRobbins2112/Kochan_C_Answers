#include <stdio.h>

int minimum(int values[10]){

  int min = values[0];

  for (int i = 1; i < 10; i++){
    if (values[i] < min)
      min = values[i];
  }

  return min;

}


int main(){

  int scores[] = {1,6,3,8,3,9,2,7,5,4};
  int i;
  int minScore;

  minScore = minimum(scores);
  printf("Minimum score is %d\n", minScore);

  return 0;
}
