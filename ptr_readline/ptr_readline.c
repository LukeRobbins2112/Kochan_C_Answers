#include <stdio.h>

void readLine(char *buffer){

  char c;
  int i = 0;

  do{
    c = getchar();
    *(buffer + i) = c;
    ++i;
  }
  while (c != '\n');

  *(buffer + i - 1) = '\0';
}


int main(){

  int i;
  char line[81];

  for (i = 0; i < 3; i++){
    readLine(line);
    printf("%s\n\n", line);
  }

  return 0;
}
