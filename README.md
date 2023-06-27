ATTiny85 mouse jiggler
======================
This is a simple program for the Digispark USB with ATTiny85 that moves the mouse cursor every 30 seconds (you can configure the constant in `main.cpp` file, it's called `MOUSE_DELAY_IN_SECONDS`) to prevent the computer from going to sleep. It is useful for watching videos on a laptop while doing something else.

Important, if you are using PlatformIO to upload the code to the Digispark USB, maybe you'll need to download [this file](https://github.com/micronucleus/micronucleus/blob/master/commandline/49-micronucleus.rules) and put it in `/etc/udev/rules.d/49-micronucleus.rules`.

We are going to improve it by adding a capacitive touch sensor (TTP223) to activate the mouse jiggler. This sensor has several modes of operation, we are going to use the toggle mode. When the sensor is touched, the mouse jiggler will be activated, and when it is touched again, it will be deactivated. For that, we will close B (we will solder pins for B mode, you can see more about this in the [pinouts](#pinouts) section) and connect it to the sensor. Then, we will connect the sensor to the 5V pin and to the pin 0 (P0) of the Digispark USB. Finally, we will connect the GND pin of the sensor to the GND pin of the Digispark USB.

# Soldering
![soldered](https://github.com/serginator/attiny85-mouse-jiggler/assets/709594/0e08e6a8-75e1-4a1c-ab26-c95f73660c23)

# Pinouts

## Digispark USB
![digispark-pinout](https://github.com/serginator/attiny85-mouse-jiggler/assets/709594/fff8dbeb-cc8e-4b93-b033-925ba1cd587a)

## TTP223
![ttp223-pinout](https://github.com/serginator/attiny85-mouse-jiggler/assets/709594/fadfb63c-03c4-4391-ac3d-79b035dad7d6)
![ttp223-config](https://github.com/serginator/attiny85-mouse-jiggler/assets/709594/addd1ec9-d764-4888-b429-d63f88c9f1f8)
