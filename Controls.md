# CONTROLS
## RC-CAR
This repository contains the code and documentation for building an RC car using an Arduino Uno microcontroller board and other related components. The following sections describe the different parts required and how they will be used in building the RC car.

### Components Table
| Component           | Purpose                                                        |
| -------------------|----------------------------------------------------------------|
| `Arduino Uno`       | Microcontroller board for controlling the RC car's movements.  |
| `L298N`             | Dual H-bridge motor driver for controlling the RC car's motors. |
| `DC-DC converter`   | Electronic circuit for step-down voltage conversion.           |
| `TBA6600`           | Motor step-driver for controlling the RC car's wheels.         |
| `HC-12`             | Wireless transceiver module for telemetry data transmission.   |


### Arduino Uno
The Arduino Uno is a microcontroller board based on the ATmega328P microcontroller. It has 14 digital input/output pins, 6 analog inputs, a 16 MHz quartz crystal, a USB connection, a power jack, and a reset button. In this project, the Arduino Uno will be used to control the RC car's movements.

### L298N Motor Driver
The L298N motor driver is a dual H-bridge motor driver that can control the speed and direction of two DC motors. It can handle a maximum current of 2A per channel and has built-in protection diodes. The L298N motor driver will be used to control the speed and direction of the RC car's motors.
Use following link : https://lastminuteengineers.com/l298n-dc-stepper-driver-arduino-tutorial/

### DC-DC Converter
The DC-DC converter is an electronic circuit that converts a DC voltage from one level to another. In this project, a DC-DC converter will be used to step-down the voltage from the RC car's battery to the voltage required by the Arduino Uno and other components.

### TBA6600 Motor Step-Driver
The TBA6600 motor step-driver is a bipolar chopper stepper motor driver that can drive stepper motors with up to 1.5A per phase. It can operate in full-step, half-step, and micro-step modes and has built-in thermal shutdown protection. The TBA6600 motor step-driver will be used to control the steering mechanism of the RC car.

### HC-12 Telemetry
The HC-12 is a wireless serial communication module that operates on the 433 MHz frequency band. It can be used to establish a wireless link between the RC car and a remote device, such as a computer or a smartphone. In this project, the HC-12 module will be used to transmit telemetry data from the RC car to a remote device.
Use following link : https://www.hackster.io/smartprojects/how-to-communicate-two-hc12-module-with-arduino-a0b5fa

### Usage
To use this code, you will need to download the code files and upload them to the Arduino Uno board using the Arduino IDE. The code is written in C/C++ programming language and uses the Arduino library. Once the code is uploaded, you can power up the RC car and use the controller to move the car forward, backward, turn left, and turn right.

### Wiring Diagram
The following wiring diagram shows how the components should be connected to the Arduino Uno board:

### RC-Car Wiring Diagram

### Pin Configuration
The following table shows the pin configuration of the Arduino Uno board and how the pins are used in this project:

| Component           | Pin Configuration                             |
| -------------------|-----------------------------------------------|
| `Arduino Uno`       | `ENA` - PWM pin for motor speed control        |
|                     | `IN1` - Control pin for motor direction        |
|                     | `IN2` - Control pin for motor direction        |
| `L298N`             | `ENA` - Input pin for PWM motor speed control  |
|                     | `IN1` - Input pin for motor direction control  |
|                     | `IN2` - Input pin for motor direction control  |
|                     | `OUT1` - Output pin for motor connection       |
|                     | `OUT2` - Output pin for motor connection       |
| `TBA6600`           | `STEP` - Step input pin for controlling wheels |
|                     | `DIR` - Direction input pin for controlling wheels |
| `HC-12`             | `TX` - Transmit pin for wireless telemetry data |
|                     | `RX` - Receive pin for wireless telemetry data  |

### Controller
The controller for the RC car can be any device that can send signals to the Arduino Uno board. In this project, a Bluetooth module will be used
