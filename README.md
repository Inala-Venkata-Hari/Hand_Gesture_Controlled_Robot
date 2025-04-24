# Hand Gesture Controlled Robot Using Arduino

This project presents a **wireless hand gesture-controlled robot** system using **Arduino**, **MPU6050 accelerometer**, and **nRF24L01 transceivers** for seamless, intuitive robot control. Users can operate the robot with simple hand gestures like forward, backward, left, right, and stop.

---

##  Project Overview

Aimed at enhancing human-machine interaction, this system replaces traditional control methods like joysticks and voice commands with natural, contactless hand gestures. It’s particularly valuable in **assistive technology**, **industrial automation**, and **remote operations**.

---

##  Features

- Wireless gesture-based control
- Real-time robot navigation
- Affordable and portable hardware setup
- Accessible interface for users with physical disabilities
- Modular and scalable system architecture

---

##  System Components

- **MPU6050 Accelerometer**
- **Arduino Nano / Uno**
- **nRF24L01 Transceivers**
- **L298N Motor Driver**
- **DC Motors**
- **12V Battery / Power Bank**

---

##  System Architecture

**Modules:**
- **Transmitter (Hand Module)**: Detects gestures and sends commands via RF
- **Wireless Communication Module**: Handles reliable, low-latency data transfer
- **Receiver (Robot Module)**: Interprets commands and controls motor actions

---

##  Libraries Used

- `Wire.h` – I2C communication with MPU6050
- `RF24.h` – RF communication with nRF24L01
- `Servo.h` – (If servo motors are included)
- `RH_ASK.h` – RF ASK modulation (as an alternative RF method)

---


##  Documentation

The complete project report, system diagrams, coding blocks, and test cases are available in the **[Final Thesis Document](./Final_Thesis.pdf)**.

---

## Result

Transmission Module

![image](https://github.com/user-attachments/assets/c41f17ed-0cb0-4199-9a9d-71af264718d2)

Receiver Module

![image](https://github.com/user-attachments/assets/b25e88b1-89aa-4025-957d-012cd5c36e8d)

 
