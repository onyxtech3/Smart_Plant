# Smart Plant
## What is this?
This is a humidity sensor for plants. It can tell you when you need to water your plants or if you overwatered your plants.

<img width="800" height="1000" alt="project" src="https://github.com/user-attachments/assets/134d88f9-82d4-4cea-9941-a3e181e7fad3" />

(the project)

## What parts did I use?
I used:
* an Arduino UNO
* LCD I2C Display
* Humidity sensor

## How to assemble everything:
First, prepare your Arduino UNO and a breadboard.
Plug a wire from 5V (on the Arduino) into the + rail on the breadboard, and another wire from GND on the board to the - rail.
On the humidity sensor plug the VCC pin into the + rail on the breadboard, the GND pin into the - rail and the AO pin into the A0 pin on the Arduino.
For the screen plug the GND into -, VCC into +, SDA into A4 (on the Arduino) and SLC into A5 (on the Arduino too).

## How to make it work?
You can use the smart_plant_code.ino file to make your humidity sensor work.
