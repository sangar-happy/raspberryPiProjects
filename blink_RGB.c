#include <stdio.h>
#include <wiringPi.h>

// using the physical numbering scheme
#define RED   33
#define GREEN 35
#define BLUE  37

int main()
{
	if(wiringPiSetupPhys() == -1)
		return 1;

	pinMode(RED,   OUTPUT);	// sets the pin 33 for output
	pinMode(GREEN, OUTPUT);	// sets the pin 35 for output
	pinMode(BLUE,  OUTPUT);	// sets the pin 37 for output

	int set_R, set_G, set_B;	// variables to hold new values for the LED's
	// Why the logic of 0 and 1 is flipped here?
	// It's because i'm using common anode LED if you have a common cathode RGB led, 0 will switch it off and 1 will switch it on (only the circuits will differ, this program would run fine)
	printf("Enter values of Red, Green and Blue LED's (0 = on and 1 = off)\n\n");

	//loop to run forever
	for(;;)
	{
		printf("R G B\n");
		scanf("%d %d %d", &set_R, &set_G, &set_B);

		// update the respective pins to new state
		digitalWrite(RED,   set_R);
		digitalWrite(GREEN, set_G);
		digitalWrite(BLUE,  set_B);

		printf("\n");
	}
	return 0;
}
