#include <stdio.h>
#include <wiringPi.h>

// using the physical numbering scheme
#define LED 12
#define GPIOIN 40

int main()
{
 if( wiringPiSetupPhys() == -1)
  return 1;

 // sets the GPIO pin for either input or output
 pinMode(LED, OUTPUT);
 pinMode(GPIOIN, INPUT);

 for(int i = 1;; i++)
 {
  // Updates the status of the GPIO pin ti HIGH or LOW
  digitalWrite(LED, HIGH);
  printf("Physical pin no. %d set to HIGH\t\t%d\n", LED, i);
  // Reads the status of GPIO pin
  if(!digitalRead(GPIOIN))// if pin 40 is still LOW stop the program
   return 1;
  // delays the program by 500 ms
  delay(500);
  digitalWrite(LED, LOW);
  printf("Physical pin no. %d set to LOW\n", LED);
  if(digitalRead(GPIOIN))// if pin 40 is still HIGH stop the program
   return 2;
  delay(500);
 }
 return 0;
}

