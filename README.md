# First-Project_Memory-Game

A small circuit board Simon type game based on Arduino's ATmega328P

This game is made to improve short term memory under load and just to spend time when bored.

![](https://github.com/pelmin404/First-Project_Memory-Game/blob/main/Photo.jpg)

# 🛠️ Technical Details
### The MCU is programmed with an internal 8 MHz clock

It works on the same MCU found in Arduino UNO R3 and a few others. It can be powered by a DC power source ranging from 7 to 35 volts, the files provided use a 9V input as an example. In the final iteration I added a power indicator with a MOSFET and an LED which is brighter the higher the input voltage with 9 volts being barely visible in order to indicate when the battery is almost at 7 volts, which may cause MCU instability. In order for the indicator system to work properly the combined voltage drop of the indicator LED and the following diode D6 should be as close as possible to the drop of the L7805CV or about 2 volts. The sound control potentiometer can be either logarithmic or regular, depending on preference. The small button on the top left corner of the board is used to reset the MCU and therefore the game if you encounter an electrical issue causing MCU instability or just really don't want to lose. The circular solder pad for the power source is ground (-).

## ⚠️ Please note that some mechanical switches may produce a noisy signal that forces the MCU to think you pressed the button multiple times

# 📼 Video examples

[Win example](https://github.com/pelmin404/First-Project_Memory-Game/blob/main/Videos/Win%20example.mp4)

[Loss example](https://github.com/pelmin404/First-Project_Memory-Game/blob/main/Videos/Loss%20example.mp4)

[Power indicator](https://github.com/pelmin404/First-Project_Memory-Game/blob/main/Videos/Power%20indicator.mp4)

# ⚙️ Part List

- [ATMEGA328P-PU](https://www.digikey.com/en/products/detail/microchip-technology/ATMEGA328P-PU/1914589)
- [Leo Sales Ltd. 10mm 2x6 Colors LED](https://www.microcenter.com/product/511285/leo-sales-ltd-10mm-2x6-colors-led)
- [Tactile Button Assortment](https://www.microcenter.com/product/427684/tactile-button-assortment)
- [L7805CV]()
- [5V 1.5A Linear Voltage Regulator - 7805 TO-220](https://www.adafruit.com/product/2164)
- 5 10 kΩ resistors
- 4 220 Ω resistors
- 1 22 kΩ resistor
- 1 0.33 μF capacitor
- 1 0.1 μF capacitor
- [Leo Sales Ltd. PCB Mounted Piezo Buzzer - 9x5.5mm (10 Pack)](https://www.microcenter.com/product/677928/leo-sales-ltd-pcb-mounted-piezo-buzzer-9x55mm-(10-pack))
- A 10 kΩ potentiometer, I used an ACP CA9-V10 footprint
- A 6 mm THT momentary push button
- Any 5 mm LED and a diode that fits the footprint, that have a total voltage drop of 2 V

![](https://github.com/pelmin404/First-Project_Memory-Game/blob/main/KiCAD%20files/Memory-game.pdf)
