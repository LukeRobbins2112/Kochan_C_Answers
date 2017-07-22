#include <stdio.h>
#include <stdbool.h>


struct time{

  int seconds;
  int minutes;
  int hours;
};

struct time getTime(){

  struct time inputTime;
  scanf("%d:%d:%d", &inputTime.hours, &inputTime.minutes, &inputTime.seconds);
  
  return inputTime;
}

_Bool correctOrder(struct time time1, struct time time2){

  if (time1.hours > time2.hours){
    return false;
  }

  if (time1.hours == time2.hours){
    if (time1.minutes > time2.minutes)
      return false;
  }

  if (time1.hours == time2.hours && time1.minutes == time2.minutes){
    if (time1.seconds > time2.seconds)
      return false;
  }
  
  return true;
}

void swapStructs(struct time *time1, struct time *time2){

  struct time temp = *time1;
  *time1 = *time2;
  *time2 = temp;
}


struct time calculateDifference(struct time time1, struct time time2){

  _Bool crossMidnight = false;
  
  if (!correctOrder(time1, time2)){
      swapStructs(&time1, &time2);
      crossMidnight = true;
  }
      
  struct time result;
  
  int secDiff = time2.seconds - time1.seconds;
  int minDiff = time2.minutes - time1.minutes;
  int hourDiff = time2.hours - time1.hours;

  printf("secDiff: %d\n", secDiff);
  printf("minDiff: %d\n", minDiff);
  printf("hourDiff: %d\n", hourDiff);

  printf("time1 seconds: %d\n", time1.seconds);
  printf("time1 minutes: %d\n", time1.minutes);
  printf("time1 hours: %d\n", time1.hours);

  printf("time2 seconds: %d\n", time2.seconds);
  printf("time2 minutes: %d\n", time2.minutes);
  printf("time2 hours: %d\n", time2.hours);

  if(crossMidnight){
    minDiff = -minDiff;
    secDiff = -secDiff;
  }
    
  printf("secDiff: %d\n", secDiff);
  printf("minDiff: %d\n", minDiff);
  printf("hourDiff: %d\n", hourDiff);

  
  /*    if (crossMidnight){
      hourDiff = 24 - hourDiff;
      minDiff = (60 - minDiff) % 60;
      secDiff = (60 - secDiff) % 60;
      }*/
  
  if (secDiff < 0){
    secDiff += 60;
    minDiff--;

    if (minDiff < 0)
      minDiff += 60;
  }

  if (minDiff < 0){
    minDiff += 60;
    if (crossMidnight)
      hourDiff++;
    else
      hourDiff--;
  }

  printf("secDiff: %d\n", secDiff);
  printf("minDiff: %d\n", minDiff);
  printf("hourDiff: %d\n", hourDiff);

  
    if (crossMidnight){
      result.hours = 24 - hourDiff;
      result.minutes = (60 - minDiff) % 60;
      result.seconds = (60 - secDiff) % 60;
    }
    else{
    result.hours = hourDiff;
    result.minutes = minDiff;
    result.seconds = secDiff;
      }

  return result;  
}

void printTime(struct time t){

  printf("Time difference: %.2d:%.2d:%.2d\n", t.hours, t.minutes, t.seconds);
}

int main(){

  printf("Please enter the start time: ");
  struct time time1 = getTime();
  printf("Please enter the end time: ");
  struct time time2 = getTime();

  struct time difference = calculateDifference(time1, time2);

  printTime(difference);

  return 0;
}
