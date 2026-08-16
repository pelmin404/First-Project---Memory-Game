# First-Project_Memory-Game

A small circuit board Simon type game based on Arduino's ATmega328P

This game is made to improve short term memory under load and just to spend time when bored.

![](https://github.com/pelmin404/First-Project---Memory-Game/blob/main/Photo.jpg)

# 🛠️ Technical Details
### The MCU is programmed with an internal 8 MHz clock

It works on the same MCU found in Arduino UNO R3 and a few others. It can be powered by a DC power source ranging from 7 to 35 volts, the files provided use a 9V input as an example. In the final iteration I added a power indicator with a MOSFET and an LED which is brighter the higher the input voltage with 9 volts being barely visible in order to indicate when the battery is almost at 7 volts, which may cause MCU instability. In order for the indicator system to work properly the combined voltage drop of the indicator LED and the following diode D6 should be as close as possible to the drop of the L7805CV or about 2 volts. The sound control potentiometer can be either logarithmic or regular, depending on preference. The small button on the top left corner of the board is used to reset the MCU and therefore the game if you encounter an electrical issue causing MCU instability or just really don't want to lose. The circular solder pad for the power source is ground (-).

## ⚠️ Please note that some mechanical switches may produce a noisy signal that forces the MCU to think you pressed the button multiple times

# 📼 Video examples
## Click the links below

[Win example](https://github.com/pelmin404/First-Project_Memory-Game/blob/main/Videos/Win%20example.mp4)

[Loss example](https://github.com/pelmin404/First-Project_Memory-Game/blob/main/Videos/Loss%20example.mp4)

[Power indicator](https://github.com/pelmin404/First-Project_Memory-Game/blob/main/Videos/Power%20indicator.mp4)