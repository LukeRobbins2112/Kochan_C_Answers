#include <stdio.h>

void pointerSort(int *list, int length){
  int i,j;
  int temp;

  for (i = 0; i < length - 1; i++){
    for (j = i+1; j < length; j++){
      if (*(list+i) > *(list+j)){
	temp = *(list+i);
	*(list+i) = *(list+j);
	*(list+j) = temp;
      }
    }
  }
}


int main(){

  int i;
  int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
  
  printf("The array before the sort:\n");
  for (i = 0; i < 16; i++){
    printf("%d ", *(array+i));
  }

  pointerSort(array, 16);

  printf("The array after the sort:\n");
  for (i = 0; i < 16; i++){
    printf("%d ", *(array+i));
  }

  printf("\n");

  return 0;
  
}
