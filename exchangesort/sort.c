#include <stdio.h>


void sort(int arr[], int len){

  int temp;
  
  for (int i = 0; i < len - 1; i++){

    for (int j = i+1; j < len; j++){
      if (arr[i] > arr[j]){
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	}
    }

  }

}

int main(){

  int arr[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

  printf("The array before the sort:\n");
  for (int i = 0; i < 16; i++)
    printf("%d ", arr[i]);

  printf("\n");

  sort(arr, 16);
  printf("The array after the sort:\n");

  for (int i = 0; i < 16; i++)
    printf("%d ", arr[i]);

  printf("\n");

  return 0;
  
  
}
