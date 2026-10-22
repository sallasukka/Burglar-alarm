# Burglar Alarm

A simple Arduino burglar alarm that uses a PIR motion sensor, RGB led and a Piezo buzzer. The slide switch arms and disarms the alarm.
This project is for an embedded systems course. 

## How it works

- Switch OFF (disarmed), RGB = Blue, Piezo = Silent
- Switch ON, no motion detected, RGB = Green, Piezo = Silent
- Switch ON, motion detected, RGB = Red, Piezo = Alarm sound (500 Hz)

## Components

- Arduino Uno
- PIR motion sensor
- RGB led
- Piezo buzzer
- Slide switch
- Resistors for the LED (220 Ω)
- Wires and a breadboard

## Pin connections
![Burglar alarm circuit](images/alarm_wiring.png)

## Use

Use at your own risk. This project has been tested only on Tinkercad. 
