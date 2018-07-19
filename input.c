#include <stdio.h>
#include <wiringPi.h>

#define GPIO_IN 12

int main()
{
	if(-1 == wiringPiSetupPhys())
		return 1;

	enum state {open, closed} status;

	pinMode(GPIO_IN, INPUT);

	printf("Press and release the button to have fun\n\n");

	for(;;)
	{
		if(status == open)
		{
			if(digitalRead(GPIO_IN))
			{
				printf("The circuit is complete !\n");
				status = closed;
			}
		}
		else
		{
			if(!digitalRead(GPIO_IN))
			{
				printf("The circuit is broken !\n\n");
				status = open;
			}
		}
		delay(50);
	}
	return 0;
}
