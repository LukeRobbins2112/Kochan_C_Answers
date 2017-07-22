#include <stdio.h>
#include <stdbool.h>

struct date{

  int month;
  int day;
  int year;
};

//Function to calculate tomorrow's date

void dateUpdate(struct date *today){

  int numberOfDays (struct date d);

  if ((*today).day != numberOfDays((*today))){
    (*today).day = (*today).day + 1;
  }
  else if ((*today).month == 12){
    (*today).day = 1;
    (*today).month = 1;
    (*today).year = (*today).year + 1;
  }
  else{
    (*today).day = 1;
    (*today).month = (*today).month + 1;
  }

}

int numberOfDays(struct date d){
  int days;
  bool isLeapYear (struct date d);
  const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (isLeapYear(d) && d.month == 2)
    days = 29;
  else
    days = daysPerMonth[d.month - 1];

  return days;
}

//Function to determine if it's a leap year

bool isLeapYear(struct date d){
  bool leapYearFlag;

  if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))
    leapYearFlag = true;
  else
    leapYearFlag = false;

  return leapYearFlag;
}

int main(){
  void dateUpdate(struct date *today);
  struct date thisDay;

  printf("Enter today's date (mm dd yyyy): ");
  scanf("%d%d%d", &thisDay.month, &thisDay.day, &thisDay.year);

  printf("Today's date is %d/%d/%d.\n", thisDay.month, thisDay.day, thisDay.year % 100);
  
  dateUpdate(&thisDay);

  printf("The next day's date is %d/%d/%d.\n", thisDay.month, thisDay.day, thisDay.year % 100);

  return 0;
}
