#include <stdio.h>
#include <wiringPi.h>

#define BASE_PIN 12
#define SWITCH   22

int main()
{
	// initialises the wiringPi system to use physical numbering scheme
	if(-1 == wiringPiSetupPhys())// if the fuction returns -1 some problem has occured.
		return 1;

	// tracks the status of the buzzer, 0 is off and 1 is on
	int status = 0;

	// sets the pin 37 for output and pin 40 for input
	pinMode(BASE_PIN, OUTPUT);
	pinMode(SWITCH,   INPUT);

	printf("Press and release the button to have fun\n\n");

	// loop to run forever
	for(;;)
    {
    	if(digitalRead(SWITCH)) // if switch is pressed, start buzzing
    	{
    		// set pin 37 / base pin to HIGH. when base pin is set HIGH, the LED lights up.
			// Here common emitter configuration is used to make transistor act like a switch.
			digitalWrite(BASE_PIN, HIGH);

			if(!status)	// if the buzzer was off
			{
				printf("Buzzing initiated !!\n");
				status = 1;	// buzzer now on
			}

			// delays the program by 50 ms
			delay(50);
		}
		else // else stop buzzing
		{
			// set pin 37 / base pin to LOW. when base pin is set LOW, the LED stops glowing.
			digitalWrite(BASE_PIN, LOW);

			if(status)	// if the buzzer was on
			{
				printf("Buzzing stopped !!\n\n");
				status = 0;	// buzzer now off
			}

			// delays the program by 50 ms
			delay(50);
		}
	}

	return 0;
}
