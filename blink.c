#include <stdio.h>
#include <wiringPi.h>

#define LED 12
#define GPIOIN 40
int main()
{
 if( wiringPiSetupPhys() == -1)
  return 1;

 pinMode(LED, OUTPUT);
 pinMode(GPIOIN, INPUT);

 for(int i = 1;; i++)
 {
  digitalWrite(LED, HIGH);
  printf("Physical pin no. %d set to HIGH\t\t%d\n", LED, i);
  if(!digitalRead(GPIOIN))
   return 1;
  delay(500);
  digitalWrite(LED, LOW);
  printf("Physical pin no. %d set to LOW\n", LED);
  if(digitalRead(GPIOIN))
   return 2;
  delay(500);
 }
 return 0;
}

