# 7Semi ACS772 Current Sensor Arduino Library

![Arduino](https://img.shields.io/badge/platform-arduino-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Status](https://img.shields.io/badge/status-active-brightgreen.svg)

An Arduino library for interfacing with the **ACS772 Hall-effect Current Sensor**.  
This library reads the analog voltage output of the ACS772 and converts it into the measured current using the configured sensitivity.

---

## ✨ Features
- Supports **ACS772 Hall-effect current sensors** (5A to 200A variants).  
- Converts **analog voltage to current (A)**.  
- Simple **initialization and reading API**.  
- Example sketches included for quick start.  
- Compatible with all Arduino boards (UNO, Mega, Leonardo, ESP32, etc).

---

## 📦 Installation

### Arduino IDE
1. Download this repository as a ZIP file.  
2. In Arduino IDE, go to **Sketch → Include Library → Add .ZIP Library...**  
3. Select the downloaded ZIP file.  
4. Restart Arduino IDE.  

The library will now appear under **File → Examples → ACS772_CurrentSensor**.

### PlatformIO
Add this repository to your `platformio.ini`:

```ini
lib_deps = 
    https://github.com/7semi-solutions/7Semi-ACS772-CurrentSensor-Arduino-Library
