#include <stdio.h>
#include <wiringPi.h>
#include <string.h>

int main()
{
 if(-1 == wiringPiSetupPhys())
  return 1;

 int physicalNo[] = {7, 11, 12, 13, 15, 16, 18, 22, 29, 31, 32, 33, 35, 36, 37,38, 40};
 char pinName[41][7];
 strcpy(pinName[7],  "GPIO7");
 strcpy(pinName[11], "GPIO17");
 strcpy(pinName[12], "GPIO18");
 strcpy(pinName[13], "GPIO27");
 strcpy(pinName[15], "GPIO22");
 strcpy(pinName[16], "GPIO23");
 strcpy(pinName[18], "GPIO24");
 strcpy(pinName[22], "GPIO25");
 strcpy(pinName[29], "GPIO5");
 strcpy(pinName[31], "GPIO6");
 strcpy(pinName[32], "GPIO12");
 strcpy(pinName[33], "GPIO13");
 strcpy(pinName[35], "GPIO19");
 strcpy(pinName[36], "GPIO16");
 strcpy(pinName[37], "GPIO26");
 strcpy(pinName[38], "GPIO20");
 strcpy(pinName[40], "GPIO21");

 for(int i = 0; i < 17; i++)
   pinMode(physicalNo[i], OUTPUT);

 while(1)
  for(int i = 0; i < 17; i++)
  {
   digitalWrite(physicalNo[i], HIGH);
   printf("%s set HIGH\n", pinName[physicalNo[i]]);
   delay(1000);
   digitalWrite(physicalNo[i], LOW);
   printf("%s set LOW\n", pinName[physicalNo[i]]);
   delay(100);
  }

 return 0;
}
