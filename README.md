# Hand Gesture Controlled Robot Using Arduino

This project presents a **wireless hand gesture-controlled robot** system using **Arduino**, **MPU6050 accelerometer**, and **nRF24L01 transceivers** for seamless, intuitive robot control. Users can operate the robot with simple hand gestures like forward, backward, left, right, and stop.

---

## 📜 Project Overview

Aimed at enhancing human-machine interaction, this system replaces traditional control methods like joysticks and voice commands with natural, contactless hand gestures. It’s particularly valuable in **assistive technology**, **industrial automation**, and **remote operations**.

---

## 🚀 Features

- Wireless gesture-based control
- Real-time robot navigation
- Affordable and portable hardware setup
- Accessible interface for users with physical disabilities
- Modular and scalable system architecture

---

## 📷 System Components

- **MPU6050 Accelerometer**
- **Arduino Nano / Uno**
- **nRF24L01 Transceivers**
- **L298N Motor Driver**
- **DC Motors**
- **12V Battery / Power Bank**

---

## 📈 System Architecture

**Modules:**
- **Transmitter (Hand Module)**: Detects gestures and sends commands via RF
- **Wireless Communication Module**: Handles reliable, low-latency data transfer
- **Receiver (Robot Module)**: Interprets commands and controls motor actions

---

## 💾 Libraries Used

- `Wire.h` – I2C communication with MPU6050
- `RF24.h` – RF communication with nRF24L01
- `Servo.h` – (If servo motors are included)
- `RH_ASK.h` – RF ASK modulation (as an alternative RF method)

---

## 🔧 How It Works

1. **User performs a hand gesture**
2. **MPU6050 detects hand orientation changes**
3. **Arduino Nano processes raw data**
4. **nRF24L01 transmits gesture command**
5. **Robot’s Arduino Uno receives and interprets the command**
6. **L298N Motor Driver moves the robot in the respective direction**

---

## 📊 Test Results

| Gesture  | Accuracy (%) | Response Time (ms) |
|:----------|:----------------|:---------------------|
| Forward   | 95%               | 70 ms                  |
| Backward  | 90%               | 70 ms                  |
| Left      | 85%               | 70 ms                  |
| Right     | 95%               | 70 ms                  |
| Stop      | 100%              | 30 ms                  |

---

## 🔮 Future Enhancements

- AI-based adaptive gesture learning
- Integration with IoT and smart devices
- Voice command feature
- Autonomous robot navigation
- Environmental alerts and enhanced power management

---

## 📎 Documentation

The complete project report, system diagrams, coding blocks, and test cases are available in the **[Final Thesis Document](./Final_Thesis.pdf)**.

---

## 📬 Connect

> **Project by:**  
> G. Kalyan Sai Goud, Rajam Pavan Kumar, Balthu Varshith  
> Under the guidance of **Mr. M. Ravi Kumar**  
> Department of Computer Science & Engineering (IoT), Malla Reddy University  

---

## 📌 License

This project is open-source under the MIT License — see the [LICENSE](LICENSE) file for details.

