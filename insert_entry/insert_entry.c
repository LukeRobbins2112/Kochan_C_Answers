#include <stdio.h>

struct entry{
  int value;
  struct entry *next;
};

void insertEntry(struct entry *entryPtr, struct entry *prevEntry){

  entryPtr->next = prevEntry->next;
  prevEntry->next = entryPtr;
}

int main(){

  struct entry e1, e2, e3, newEntry;
  //  struct entry *newEntry;

  struct entry *list_ptr = &e1;

  e1.value = 100;
  e1.next = &e2;
  
  e2.value = 200;
  e2.next = &e3;

  e3.value = 300;
  e3.next = (struct entry *)0;

  insertEntry(&newEntry, &e2);

  newEntry.value = 250;

  while (list_ptr != (struct entry *)0){
    printf("%d\n", list_ptr->value);
    list_ptr = list_ptr->next;
  }
  
  return 0;
  
}
