#include <stdio.h>

struct entry{
  struct entry *prev;
  int value;
  struct entry *next;
};

void insertEntry(struct entry *entryPtr, struct entry *prevEntry){

  entryPtr->next = prevEntry->next;
  prevEntry->next = entryPtr;
  entryPtr->prev = prevEntry;
}

void removeEntry(struct entry *removed){
  (removed->prev)->next = removed->next;
  (removed->next)->prev = removed->prev;
}


int main(){

  struct entry e1, e2, e3, newEntry;
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

  newEntry.value = 150;

    printf("Printing the list forwards using next part of doubly linked list\n");

  while (list_ptr != (struct entry *)0){
    printf("%d\n", list_ptr->value);
    list_ptr = list_ptr->next;
  }

  printf("Printing the list backwards using prev part of doubly linked list\n");
  
  list_ptr = &e3;
  
  while (list_ptr != (struct entry *)0){
    printf("%d\n", list_ptr->value);
    list_ptr = list_ptr->prev;
  }


  printf("Adding an entry between e1 and e2\n");

  insertEntry(&newEntry, &e1);
  list_ptr = &e1;

  printf("Address of newEntry: %x\n", &newEntry);
  printf("Address of e1.next: %x\n", e1.next);
  printf("Address of e2: %x\n", &e2);
  printf("Address of newEntry.next: %d\n", newEntry.next);

  while (list_ptr != (struct entry *)0){
    printf("%d\n", list_ptr->value);
    list_ptr = list_ptr->next;
  }

  printf("Removing entry e2\n");


  removeEntry(&e2);

  list_ptr = &e1;

    while (list_ptr != (struct entry *)0){
      printf("list_ptr address: %x\n", list_ptr);
      printf("%d\n", list_ptr->value);
      list_ptr = list_ptr->next;
  }
  
  return 0;
}
