# raspberryPiProjects
From the basic "blink" program to advance programs

# using wiringPi.h library
download link: http://wiringpi.com/download-and-install/

# rules of thumb for circuit diagrams

Red wire:     Used to show connection with positive terminal

Blue wire:    Used to show connection to ground

Yellow wire:  Used to show connection with GPIO pin

White wire:   Used to show circuit's internal wiring 

Resistors:    Four band color coding is used to show the resistence (<a href="http://www.circuitstoday.com/resistor-color-code-chart">details</a>)


# blink.c
Simple program which is "HELLO WORLD" equivalent in programming raspberry pi.

Resistors used: 10kΩ (Brown, Black, Orange) and 1kΩ (Brown, Black, Red)

Led used: Normal led (bent wire is anode)

Circuit Diagram:

<p align="center">
  <img src="https://raw.githubusercontent.com/sangar-happy/raspberryPiProjects/master/circuit_diagrams/blink.c.png" title="circuit for blink.c">
</p>


# input.c
Program to take input from the user using a pushbutton/switch.

Resistors used: 10kΩ (Brown, Black, Orange) and 1kΩ (Brown, Black, Red)

Pushbutton: Two pin pushbutton/switch

Circuit Diagram:

<p align="center">
  <img src="https://raw.githubusercontent.com/sangar-happy/raspberryPiProjects/fBranch/circuit_diagrams/input.c.png" title="circuit for input.c">
</p>
