**ECE 243 Final Project - "The Legendary Pizzasmith"**

The contents of this repository contain files for our final project for ECE 243 S – Computer Organization (Winter 2024) at the University of Toronto.
Language: C

“The Legendary Pizzasmith” is a pizza making game created using C.
The program is designed to work with a Nios II De1-SoC board.
The game requires a VGA screen to display its graphical features, and a PS2 keyboard for input data. 

The gameplay works as follows:
- The player has 2 minutes to make as many of the pizza orders displayed to them on screen.
- Player can move the chef left/right, pick up/drop ingredients and submit pizzas using PS2-Keyboard commands.
- Perfect pizzas will receive 5 coins and a 10 second bonus on time. Semi-perfect pizzas will receive partial points.
- The De1-SoC board will display the points on the HEX Display, while LEDs will count down the time (in binary).
- The player can play the game as many time as they would like by restarting the game at the beginning.

The game can be previewed by copy+pasting the code from main.c into this link:
https://cpulator.01xz.net/?sys=nios-de1soc
