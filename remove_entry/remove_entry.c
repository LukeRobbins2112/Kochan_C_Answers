#include <stdio.h>

struct entry{
  int value;
  struct entry *next;
};

void removeEntry(struct entry *entryBefore){
  entryBefore->next = (entryBefore->next)->next;
}

int main(){

  struct entry e1, e2, e3;

  struct entry list_head = {0, &e1};
  struct entry *list_ptr = &list_head;

  e1.value = 100;
  e1.next = &e2;
  
  e2.value = 200;
  e2.next = &e3;

  e3.value = 300;
  e3.next = (struct entry *)0;

  removeEntry(&e2);

  while (list_ptr != (struct entry *)0){
    printf("%d\n", list_ptr->value);
    list_ptr = list_ptr->next;
  }
  
  return 0;


}
