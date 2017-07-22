#include <stdio.h>
#include <stdbool.h>


struct time{

  int seconds;
  int minutes;
  int hours;
};

struct time getTime(){

  struct time inputTime;
  printf("Input the time (hh:mm:ss): ");
  scanf("%d:%d:%d", &inputTime.seconds, &inputTime.minutes, &inputTime.hours);
  
  return inputTime;
}


struct time calculateDifference(struct time time1, struct time time2){

  int secDiff = 0;;
  int minDiff = 0;
  int hourDiff = 0;
  struct time result;
  
  secDiff = time2.seconds - time1.seconds;
  minDiff = time2.minutes - time1.minutes;
  hourDiff = time2.hours - time1.hours;
  
  if (secDiff < 0){
    secDiff += 60;
    minDiff--;

    if (minDiff < 0)
      minDiff += 60;
  }

  if (minDiff < 0){
    minDiff += 60;
    hourDiff--;
  }

    result.hours = hourDiff;
    result.minutes = minDiff;
    result.seconds = secDiff;

  return result;  
}

void printTime(struct time t){

  printf("Time: %.2d:%.2d:%.2d\n", t.hours, t.minutes, t.seconds);
}

int main(){

  printf("Please enter the start time: ");
  struct time time1 = getTime();
  printf("Please enter the end time: ");
  struct time time2 = getTime();

  printf("Time 1: %d:%d:%d", time1.hours, time1.minutes, time1.seconds);
  printf("Time 2: %d:%d:%d", time2.hours, time2.minutes, time2.seconds);

  
  struct time difference = calculateDifference(time1, time2);

  printTime(difference);

  return 0;
}
