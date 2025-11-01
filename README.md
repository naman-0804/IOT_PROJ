# Client Server Projects

This repository contains multiple IoT-based client-server projects built using Arduino and Raspberry Pi. Each project focuses on real-time data collection, monitoring, and communication between client and server devices.

---

## 📂 Projects Overview

### 1. Flash Flood Monitoring
A system designed to monitor potential flood conditions using simple environmental sensors.  
- **Technology Used:** Arduino, Rainwater Sensor, Soil Moisture Sensor, Python  
- **Description:**  
  The system measures rainfall and soil moisture levels to predict flood-prone conditions. Data is sent to a central server for monitoring or alerting purposes.  
- **Features:**
  - Detects rainfall intensity and soil saturation  
  - Sends real-time data to the server  
  - Can trigger alerts when values exceed safe limits  

---

### 2. Smart Pill Dispenser
A prototype designed to sense user interaction with a pill container using a UV sensor.  
- **Technology Used:** Arduino / Raspberry Pi, UV Sensor, Python  
- **Description:**  
  The system detects the presence of a hand near the pill area using a UV sensor. Instead of dispensing pills automatically, it simply registers the interaction as a pickup event.  
- **Features:**
  - Detects hand movement near pills using UV sensing  
  - Logs or transmits data to indicate pill access  
  - Low-power and contactless  

---

### 3. Client-Server System with Arduino and Raspberry Pi
A simple implementation of a client-server architecture for IoT communication.  
- **Technology Used:** Raspberry Pi (Server), Arduino (Client), Python  
- **Description:**  
  Demonstrates bidirectional communication between a Raspberry Pi server and Arduino clients for data exchange or remote control.  
- **Features:**
  - Basic socket communication  
  - Real-time sensor data sharing  
  - Modular and extendable design  

---

### 4. Object Detection with LED on Raspberry Pi
An object detection system that uses computer vision and LEDs for visual feedback.  
- **Technology Used:** Raspberry Pi, OpenCV, Python  
- **Features:**
  - Detects objects using a connected camera  
  - Activates LED when an object is detected  

---

## 📄 License
This repository is licensed under the **Unlicense** — free and open for public use.

---

## 👨‍💻 Author
**Naman Srivastava**  
[GitHub Profile](https://github.com/naman-0804)

---

## 🧰 How to Run
1. Clone this repository:
   ```bash
   git clone https://github.com/naman-0804/IOT_PROJ
