#include <stdio.h>

int main(){

  struct date{
    int month;
    int day;
    int year;
  };

  struct date today;
  struct date *datePtr;

  datePtr = &today;

  datePtr->month = 9;
  datePtr->day = 25;
  datePtr->year = 2015;

  printf("Todays date is %d/%d/%.2d.\n", datePtr->month, datePtr->day, datePtr->year % 100);

  return 0;
}
