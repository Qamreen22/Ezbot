# Ezbot: Obstacle Avoiding Car

|   |   |
|---|---|
| Ezbot is a Bluetooth-controlled, Arduino-based obstacle-avoiding car designed for educational purposes and hobbyist robotics projects. It features autonomous obstacle detection and avoidance capabilities, along with remote control via Bluetooth. The modular design allows for easy customization and expansion, making it ideal for learning and experimentation. | ![ezbot](./Images%20and%20Videos/Ezbot.jpg) |

---

## Table of Contents

1. [Introduction](#introduction)
2. [Features](#features)
3. [Components Required](#components-required)
4. [Circuit Diagram](#circuit-diagram)
5. [Hardware Set-up](#hardware-set-up)
6. [Software Set-up](#software-set-up)
7. [Usage](#usage)
8. [Contributing Team](#contributing-team)
9. [Contributing](#contributing)
10. [License](#license)

---

## Introduction

Ezbot is a small-scale autonomous vehicle built during a robotics internship as part of our Bachelor of Engineering program. Designed with an Arduino UNO, Ezbot navigates and avoids obstacles using an ultrasonic sensor and servo motor control. This README provides an overview of its components, setup instructions, and usage guidelines.

---

## Features

- Autonomous obstacle detection and avoidance.
- Bluetooth module for remote control.
- Modular design for easy extension and modification.
- Suitable for educational purposes and hobbyist robotics projects.

---

## Components Required

- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Servo Motor
- Bluetooth Module (HC-05)
- L298N H-Bridge Motor Driver
- DC Motors (2x)
- Power Supply (Battery)
- Connecting Wires
- Breadboard (optional)

---

## Circuit Diagram

![Circuit Diagram](./Schemetics%20and%20Diagram/Circuit%20Diagram.jpg)

**Figure 1: Circuit Diagram of Ezbot**

---

## Hardware Set-up

**Ultrasonic Sensor to Arduino Connections:**

| Ultrasonic Sensor | Arduino |
|-------------------|---------|
| VCC               | 5V      |
| Trig              | ~6      |
| Echo              | ~5      |
| GND               | GND     |

**Servo Motor to Arduino Connections:**

| Servo Motor | Arduino |
|-------------|---------|
| VCC         | 3.3V    |
| Pulse       | 7       |
| GND         | GND     |

**Arduino to Bluetooth Connections:**

| Arduino | Bluetooth |
|---------|-----------|
| TXD > 1 | RXD       |
| RXD < 0 | TXD       |
| GND     | GND       |
| 5V      | VCC       |

**L298N H-Bridge Motor Driver to Arduino Connections:**

| L298N H-Bridge Motor Driver | Arduino |
|-----------------------------|---------|
| 5V                          | Vin     |
| GND                         | GND     |
| IN1                         | 8       |
| IN2                         | 9       |
| IN3                         | 10      |
| IN4                         | 11      |

---

## Software Set-up

1. **Install Arduino IDE:**
   - Download and install the Arduino IDE from the [official website](https://www.arduino.cc/en/software).
   - Follow the installation instructions for your operating system.

2. **Set Up the Arduino IDE:**
   - Open Arduino IDE.
   - Go to `File > Preferences` and set your sketchbook location.
   - Install the necessary libraries (`Sketch > Include Library > Manage Libraries`):
     - NewPing
     - Servo
     - (Optional) Additional libraries as per project requirements.

3. **Upload the Code:**
   - Open the project code in Arduino IDE.
   - Verify and upload the code to Arduino UNO.

4. **Additional Configurations:**
   - Ensure all components are connected correctly as per the circuit diagram.
   - Adjust parameters in the code (if needed) for your specific setup.

---

## Usage

1. **Power On:**
   - Connect the power supply to Ezbot.

2. **Remote Control:**
   - Use a Bluetooth-enabled device to control Ezbot remotely using predefined commands ('F' for Forward, 'B' for Backward, 'L' for Left, 'R' for Right, 'S' for Stop).

3. **Autonomous Mode:**
   - Ezbot will autonomously detect obstacles using the ultrasonic sensor and navigate around them.

---

## Contributing Team

- **[Qamreen](https://github.com/Qamreen22)**
- **[Jhanavi J S](https://github.com/Jhanavi1402)**
- **[Sandhya Singh M](https://github.com/sandhyaasingh)**
- **[Katharine John Kennedy](https://github.com/Katharine007)**

---

## Contributing

This project was developed collaboratively by the team mentioned above during our robotics internship in the first year of our Bachelor of Engineering program. Contributions are welcome! Fork this repository, make your changes, and submit a pull request. Please follow the existing coding style and guidelines.

---

## License

This project is open-source and available under the MIT License. See the [LICENSE](LICENSE) file for more details.
