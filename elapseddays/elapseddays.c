#include <stdio.h>


struct date{
  int month;
  int day;
  int year;
};

struct date getDate(){

  struct date entry;
  scanf("%d/%d/%d", &entry.month, &entry.day, &entry.year);
  return entry;
}

int f(struct date d){

  if (d.month <= 2)
    return (d.year - 1);
  else
    return d.year;
}

int g(struct date d){

  if (d.month <= 2)
    return (d.month + 13);
  else
    return (d.month + 1);
}

int dateValue(struct date d){

  int value = 1461 * (f(d)/4) + (153 * g(d)/5) + d.day;
  return value;
}

int main(){

  struct date getDate();
  int f(struct date d);
  int g(struct date d);
  int dateValue(struct date d);

  printf("Please enter in the start date\n");
  struct date date1 = getDate();

  printf("Please enter in the end date\n");
  struct date date2 = getDate();

  int difference = dateValue(date2) - dateValue(date1);
  printf("The number of elapsed days is %d", difference);

  return 0;
}
