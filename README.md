# raspberryPiProjects
From the basic "blink" program to advance programs

</hr>

# prerequisites

### software
<ul style = "list-style-type:circle">
<li> <a href = "http://wiringpi.com/download-and-install">wiringPi.h library</a>

<li> <a href = "http://fritzing.org/home/">fritzing</a>
</ul>
  
### hardware
Each new line assumes you to have the hardware components of previous line (components segregated according to their usage in successive programs):

<ul style = "list-style-type: circle">
<li>raspberry pi 3 model B+, bread board, GPIO breakout board / female to male jumper wires, male jumper wires, resistors (500Ω and 10kΩ), 5 mm LED's

<li>resistors (1kΩ), two pin switch.

<li>rgb led (common anode/cathode)

<li>resistors (330Ω), npn transistor (2N2222A)
</ul>

# conventions for circuit diagrams

### usage of wires

<ul style = "list-style-type: circle">
<li>Red wire:     Used to show connection with positive terminal

<li>Blue wire:    Used to show connection to ground

<li>Yellow wire:  Used to show connection with GPIO pin

<li>White wire:   Used to show circuit's internal wiring 

### usage of resistors

Four band color coding is used to show the resistence (<a href="http://www.circuitstoday.com/resistor-color-code-chart">details</a>)

### usage of LED's

The anode of the LED is longer than other pin(s) and is bent.

</hr>

# blink.c
Simple program which is "HELLO WORLD" equivalent in programming raspberry pi.

Resistors used: 500Ω (Green, Black, Brown) and 10kΩ (Brown, Black, Orange)

Led used: 5 mm LED

Circuit Diagram:

<p align="center">
  <img src="https://raw.githubusercontent.com/sangar-happy/raspberryPiProjects/fBranch/circuit_diagrams/blink.c.png" title="circuit for blink.c">
</p>


# input.c
Program to take input from the user using a pushbutton/switch.

Resistors used: 10kΩ (Brown, Black, Orange) and 1kΩ (Brown, Black, Red)

Pushbutton: Two pin pushbutton/switch

Circuit Diagram:

<p align="center">
  <img src="https://raw.githubusercontent.com/sangar-happy/raspberryPiProjects/fBranch/circuit_diagrams/input.c.png" title="circuit for input.c">
</p>

# blink_RGB
Program to make four pin RGB LED change colors with user input.

### For a common anode RGB LED

RGB LED: The long pin with a bend is common anode. Rest of the pins are cathodes of respective LED's

Resistors used: 3 * 1kΩ (Brown, Black, Red)

Wiring: Red, Green and Blue wires are used to show connection with cathode of LED of respective colors. Orange wire is used to denote connection with 3V

Circuit Diagram:

<p align="center">
  <img src="https://raw.githubusercontent.com/sangar-happy/raspberryPiProjects/fBranch/circuit_diagrams/blink_RGB.c_commonAnode.png" title="circuit for blink_RGB.c (common anode)">
</p>

### For a common cathode RGB LED

RGB LED: The short pin without a bend is common cathode. Rest of the pins are anodes of respective LED's

Resistors used: 3 * 1kΩ (Brown, Black, Red)

Wiring: Red, Green and Blue wires are used to show connection with anode of LED of respective colors. Grey wire is used to denote connection to ground

Circuit Diagram:

<p align="center">
  <img src="https://raw.githubusercontent.com/sangar-happy/raspberryPiProjects/fBranch/circuit_diagrams/blink_RGB.c_commonCathode.png" title="circuit for blink_RGB.c (common cathode)">
</p>

# blink_using_transistor
Program to make two pin LED blink using a Bipolar Junction Transistor as a switch.

Led used: 5 mm LED

Resistors used: 330Ω (Orange, Orange, Brown) and 10kΩ (Brown, Black, Orange)

Transistor used: npn transistor (2N2222A). The longest pin is Base, the pin connected to ground is Emitter and the last pin is Collector (connected with cathode of LED)

Circuit Diagram:

<p align="center">
  <img src="https://raw.githubusercontent.com/sangar-happy/raspberryPiProjects/fBranch/circuit_diagrams/blink_using_transistor.c.png" title="circuit for blink_using_transistor.c">
</p>
