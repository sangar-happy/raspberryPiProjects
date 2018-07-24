#include <wiringPi.h>

// GPIO pin 37 connected with BASE pin of the transistor
#define BASE_PIN 37

int main()
{
	// initialises the wiringPi system to use physical numbering scheme
	if(-1 == wiringPiSetupPhys())// if the fuction returns -1 some problem has occured.
		return 1;

	// sets the pin 12 for output
	pinMode(BASE_PIN, OUTPUT);

	// loop to run forever
	for(;;)
	{
		// set pin 12 / base pin to HIGH. when base pin is set HIGH, the LED lights up.
		// Here common emitter configuration is used to make transistor act like a switch.
		digitalWrite(BASE_PIN, HIGH);
		// delays the program by 300 ms
		delay(300);

		// set pin 12 / base pin to LOW. when base pin is set LOW, the LED stops glowing.
		digitalWrite(BASE_PIN, LOW);
		// delays the program by 100 ms
		delay(100);
	}

	return 0;
}

