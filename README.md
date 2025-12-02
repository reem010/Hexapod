# Hexapod
## Overview
This project is a **six-legged hexapod robot** that moves by controlling multiple servo motors. The robot is powered and controlled using an **ESP32 microcontroller**, with coordinated leg movement handled via a servo driver. Each leg has two servos, enabling walking, turning, and other movements.

---

## Components

| Component | Quantity | Description |
|-----------|----------|-------------|
| ESP32 | 1 | Microcontroller with Wi-Fi/Bluetooth, acts as the brain of the hexapod. |
| SG90 MINI Servo | 12 | Small servo motors controlling the movement of the legs (2 per leg). |
| Servo Motor 16 Channel Driver (PCA9685) | 1 | Controls up to 16 servos simultaneously via I²C, ensuring smooth and synchronized movement. |
| DC Adapter 5V 2A with Double Jack | 1 | Provides external power for the servos to prevent overloading the ESP32. |
| Female-to-Female Jumper Wires (20 cm) | 4 | Used to connect ESP32 or servo driver to the servos for prototyping. |
| DC Jack Adapter Female | 1 | Connects the DC adapter to the servo driver or ESP32 safely. |
| USB Cable | 1 | Used to program the ESP32 and optionally supply temporary power during development. |














