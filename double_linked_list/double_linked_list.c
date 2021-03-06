#include <stdio.h>

struct entry{
  struct entry *prev;
  int value;
  struct entry *next;
};

int main(){

  struct entry e1, e2, e3;
  struct entry *list_ptr = &e1;

  
  e1.value = 100;
  e1.prev = (struct entry *)0;
  e1.next = &e2;

  e2.value = 200;
  e2.prev = &e1;
  e2.next = &e3;

  e3.value = 300;
  e3.prev = &e2;
  e3.next = (struct entry *)0;

  while (list_ptr != (struct entry *)0){
    printf("%d\n", list_ptr->value);
    list_ptr = list_ptr->next;
  }

  list_ptr = &e3;
  
  while (list_ptr != (struct entry *)0){
    printf("%d\n", list_ptr->value);
    list_ptr = list_ptr->prev;
  }

  
  return 0;
}
