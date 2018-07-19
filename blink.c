#include <stdio.h>
#include <wiringPi.h>

// using the physical numbering scheme
#define LED 12
#define GPIO_IN 40

int main()
{
	// initialises the wiringPi system to use physical numbering scheme
	if(wiringPiSetupPhys() == 1) // if the fuction returns -1 some problem has occured.
		return 1;

	// sets the GPIO pin for either input or output
	pinMode(LED, OUTPUT);	// sets the pin 12 for output
	pinMode(GPIO_IN, INPUT);// sets the pin 40 for input

	//loop to run forever
	for(int i = 1;; i++)
	{
		// Updates the status of the GPIO pin to HIGH or LOW
		digitalWrite(LED, HIGH);// set pin 12 to HIGH

		printf("Physical pin no. %d set to HIGH\t\t%d\n", LED, i);
		// Reads the status of GPIO pin
		if(!digitalRead(GPIO_IN))// if pin 40 is still LOW stop the program
			return 1;
		// delays the program by 500 ms
		delay(500);

		digitalWrite(LED, LOW);// set pin 12 to LOW
		printf("Physical pin no. %d set to LOW\n", LED);
		if(digitalRead(GPIO_IN))// if pin 40 is still HIGH stop the program
			return 2;
		delay(500);
	}
	return 0;
}

