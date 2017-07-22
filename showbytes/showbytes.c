#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
  int i;
  for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
  printf("\n");
}

void show_int(int x){
  show_bytes((byte_pointer) & x, sizeof(int));
}

void show_float(float x){
  show_bytes((byte_pointer) & x, sizeof(float));
}

void show_pointer(void *x){
  show_bytes((byte_pointer) & x, sizeof(void *));
}

void show_long(long x){
  show_bytes((byte_pointer) & x, sizeof(long));
}

void show_short(short x){
  show_bytes((byte_pointer) & x, sizeof(short));
}

void show_double(double x){
  show_bytes((byte_pointer) & x, sizeof(double));
}

int main(){

  int *intPtr;
  
  printf("Int: ");
  show_int(343223);

  printf("float: ");
  show_float(1.2);

  printf("pointer: ");
  show_pointer(intPtr);

  printf("long: ");
  show_long(123456789222);

  printf("short: ");
  show_short(5);

  printf("double: ");
  show_double(1.21212121221);

  return 0;
}
