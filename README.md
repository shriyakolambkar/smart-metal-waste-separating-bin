# Smart Metal Waste Separating Bin

An Arduino-based smart waste segregation system designed to automatically separate metal and non-metal waste using sensors and servo-operated flaps.

## Overview

Waste segregation plays an important role in effective waste management and recycling. However, mixed waste makes the identification and recovery of recyclable materials difficult. The Smart Metal Waste Separating Bin aims to simplify this process by detecting metal waste and directing it into a separate collection bin, reducing the need for manual segregation.

## Objectives

- To develop an automated waste segregation system.
- To detect metal objects using a proximity sensor.
- To distinguish between metal and normal waste.
- To direct waste into separate bins using servo-operated flaps.
- To reduce manual effort in waste segregation.

## Components Used

| Component | Quantity |
|---|---:|
| Arduino Board | 2 |
| IR Sensor | 1 |
| Inductive Proximity Sensor | 1 |
| Servo Motor | 2 |

## Working Principle

The system uses an IR sensor and an inductive proximity sensor to identify and segregate waste.

1. When an object is dropped into the chute, the IR sensor detects its presence and sends a signal to the Arduino.
2. The inductive proximity sensor independently detects whether the object is metallic.
3. When metal is detected, the corresponding servo motor operates the flap to direct the waste towards the metal collection bin.
4. When no metal is detected, the other servo-operated flap directs the waste towards the normal waste bin.
5. The servo motors return to their original positions after completing the movement.

## System Implementation

The implementation consists of two independently functioning sensor mechanisms:

- **IR sensor mechanism:** Detects the presence of an object entering the chute and triggers the associated servo motor.
- **Inductive proximity sensor mechanism:** Detects metal objects within its sensing range and triggers the corresponding servo motor.

The servo motors are programmed to rotate and return to their initial positions based on signals received from the Arduino.

## Future Scope

- Integration of a moisture sensor to classify waste as wet or dry.
- Expansion into a wet, dry and metal waste segregation system.
- Integration of ultrasonic sensors to monitor the filling levels of collection bins.
- GSM-based notifications for waste collection when bins reach their capacity.

Project Gallery

Prototype Overview



Flap Mechanism

## Applications

- Household waste segregation.
- Public waste collection areas.
- Recycling and waste management facilities.

## Project Information

**Project:** Smart Metal Waste Separating Bin  
**Controller:** Arduino  
**Platform:** Arduino IDE  
**Domain:** Embedded Systems and Smart Waste Management
