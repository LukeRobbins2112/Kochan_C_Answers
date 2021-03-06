#include <stdio.h>

int compareStrings(char *s1, char *s2){

  char *s1copy = s1;
  char *s2copy = s2;
  int i = 0;
  int answer;

  while ((*s1copy == *s2copy) && *s1copy && *s2copy){
    s1copy++;
    s2copy++;
  }
    

  if (*s1copy < *s2copy)
    answer = -1;
  else if (*s1copy == *s2copy)
    answer = 0;
  else
    answer = 1;

  return answer;
}


int main(){

  char first[] = "first";
  char second[] = "second";

  int result = compareStrings(first, second);

  if (result == -1)
    printf("%s comes before %s\n", first, second);
  else if (result == 0)
    printf("%s equals %s\n", first, second);
  else
    printf("%s comes before %s\n", first, second);
  return 0;
}
