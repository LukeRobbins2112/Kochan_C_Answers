#include <stdio.h>

int findString(char *searched, char *target){

  int i;
  int j;

  for (i = 0; searched[i] != '\0'; i++){
    if (searched[i] == target[0]){

      printf("i = %d\n", i);
      printf("Searched[i] = %c\n", searched[i]);
      printf("Target[j] = %c\n", target[0]);
	
      for (j = 1; target[j] != '\0'; j++){
	i++;
	if (searched[i] != target[j])
	  return -1;
      }
      return i - (j-1);
    }
  }
  
  return -1;
}

int main(){

  char searched[] = "a real chatterbox";
  char target[] = "hat";
  
  int position = findString(searched, target);
  printf("The target is at position %d in the searched string\n", position);
  
  return 0;
}
