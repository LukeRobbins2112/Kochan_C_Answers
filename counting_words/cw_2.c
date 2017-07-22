#include <stdio.h>
#include <stdbool.h>

int countWords(const char string[]){

  int i;
  int wordCount = 0;
  bool lookingForWord = true;

  for (i = 0; string[i] != '\0'; i++){
    if (string[i] != ' '){
      if (lookingForWord){
	wordCount++;
	lookingForWord = false;
      }
    }
    else
      lookingForWord = true;
  }
  return wordCount;
}

int main(){
  const char text1[] = "Well, here goes.";
  const char text2[] = "And here we go...again.";
  int countWords(const char string[]);

  printf("%s - words = %d\n", text1, countWords(text1));
  printf("%s - words = %d\n", text2, countWords(text2));

  return 0;
}
