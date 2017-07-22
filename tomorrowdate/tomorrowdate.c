#include <stdio.h>
#include <stdbool.h>

struct date{

  int month;
  int day;
  int year;
};

//Function to calculate tomorrow's date

struct date dateUpdate(struct date today){

  struct date tomorrow;
  int numberOfDays (struct date d);

  if (today.day != numberOfDays(today)){
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
  }
  else if (today.month == 12){
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year= today.year + 1;
  }
  else{
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }

  return tomorrow;
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
  struct date dateUpdate(struct date today);
  struct date thisDay;
  struct date nextDay;

  printf("Enter today's date (mm dd yyyy): ");
  scanf("%d%d%d", &thisDay.month, &thisDay.day, &thisDay.year);

  nextDay = dateUpdate(thisDay);

  printf("Tomorrow's date is %d/%d/%d.\n", nextDay.month, nextDay.day, nextDay.year % 100);

  return 0;
}
