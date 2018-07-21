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

Resistors used: 500Ω (Green, Black, Brown) and 10kΩ (Brown, Black, Orange)

Led used: Normal led (wire which is bent is anode)

Circuit Diagram:

<p align="center">
  <img src="https://raw.githubusercontent.com/sangar-happy/raspberryPiProjects/fBranch/circuit_diagrams/blink.c.png" title="circuit for blink.c">
</p>


# input.c
Program to take input from the user using a pushbutton/switch.

Resistors used: 10kΩ (Brown, Black, Orange) and 1kΩ (Brown, Black, Red)

Pushbutton: Two pin simple pushbutton


Circuit Diagram:

<p align="center">
  <img src="https://raw.githubusercontent.com/sangar-happy/raspberryPiProjects/fBranch/circuit_diagrams/input.c.png" title="circuit for input.c">
</p>

# blink_RGB
Program to make a four pin RGB LED blink.



For a common anode RGB LED

Resistors used: 3 * 1kΩ (Brown, Black, Red)

Wiring: Red, Green and Blue wires are used to show connection with cathode of LED of respective colors. Orange wire is used to denote connection with 3V

Circuit Diagram:

<p align="center">
  <img src="https://raw.githubusercontent.com/sangar-happy/raspberryPiProjects/fBranch/circuit_diagrams/blink_RGB.c_commonAnode.png" title="circuit for blink_RGB.c (common anode)">
</p>
