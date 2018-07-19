#include <stdio.h>
#include <wiringPi.h>

// using the physical numbering scheme
#define GPIO_IN 12

int main()
{
	// initialises the wiringPi system to use physical numbering scheme
	if(-1 == wiringPiSetupPhys()) // stop program if function returns -1 (indicates error)
		return 1;

	// declration of status enum which can be either be open or closed. 
	enum
	{	open,	// stands for 0
	 	closed	// stands for 1
	} status;

	// sets the pin 12 for input
	pinMode(GPIO_IN, INPUT);

	printf("Press and release the button to have fun\n\n");

	//loop to run forever
	for(;;)
	{
		// if the status was open
		if(status == open)
		{
			// and if the button is pressed now
			if(digitalRead(GPIO_IN))
			{
				printf("The circuit is complete !\n");
				status = closed;
			}
		}
		else	//if the status was closed
		{
			// and if the button is released now
			if(!digitalRead(GPIO_IN))
			{
				printf("The circuit is broken !\n\n");
				status = open;
			}
		}

		// short delay in-between each iteration
		delay(50);
	}
	return 0;
}
