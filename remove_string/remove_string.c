#include <stdio.h>

char *newWord;

void *removeString(char *word, int start, int num){

  int i;
  char *newWord;
  int count = 0;
  for (i = 0; i < start; i++){
      newWord[i] = word[i];
      count++;
    }

  for (i = (start+count); word[i] != '\0'; i++){
    newWord[count] = word[i];
    count++;
  }

  newWord[count + 1] = '\0';

}

int main(){

  char word[] = "the wrong son";
  removeString(word, 4, 6);

  printf("The string is now: %s\n", newWord);

  return 0;

}
