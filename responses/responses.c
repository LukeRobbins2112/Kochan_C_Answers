#include <stdio.h>

int main(){

  int ratingCounters[11];
  int response;

  for (int i = 1; i <= 10; i++){
    ratingCounters[i] = 0;
  }

  printf("Please enter your responses\n");

  while (1){

    scanf("%d", &response);

    if (response == 999)
      break;
    else if (response <= 0 || response > 10)
      printf("Bad Reponse: %d\n", response);
    else
      ratingCounters[response]++;
  }

  printf("Responses\n");
  printf("Rating\tNumber of Responses\n");
  printf("___________________\n");

  for (int i = 1; i <= 10; i++){
    printf("%d\t%d\n", i, ratingCounters[i]);
  }

      return 0;
}
