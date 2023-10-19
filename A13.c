#include <stdio.h>
#include <math.h>
//							Bai Tap Thuc Hanh C _____ Bonus
//							A13. Input n second. Change n to minutes, hours, and second


#include <stdio.h>

int main() {
  int seconds, hours, minutes, seconds_remaining;

  printf("Enter the number of seconds: ");
  scanf("%d", &seconds);

  // Calculate the number of hours
  hours = seconds / 3600;
  // Calculate the number of minutes remaining
  minutes = (seconds % 3600) / 60;
  // Calculate the number of seconds remaining
  seconds_remaining = (seconds % 3600) % 60;

  // Print the result
  printf("Hours: %d\nMinutes: %d\nSeconds: %d\n", hours, minutes, seconds_remaining);

  return 0;
}


