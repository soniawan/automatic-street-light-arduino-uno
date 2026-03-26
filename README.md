# 💡 Smart Street Light System (Automatic Street Light)

This project is a smart street light system simulation based on **Arduino Uno**. It utilizes an **LDR (Light Dependent Resistor) Sensor** to detect ambient light intensity and a **Relay Module** as an automatic switch to control a network of 6 LEDs.

## 🚀 Key Features
- **Automation:** Lights turn on automatically in dark environments and turn off when it is bright.
- **Scalable Design:** Integrated with a Relay module, making it safe to handle larger light loads or higher voltages in the future.
- **Dual Power Support:** Can be powered via Laptop USB or an external DC Adapter.

---

## 🛠️ Components Used
| Component | Quantity |
| :--- | :--- |
| Arduino Uno R3 | 1 |
| LDR Sensor Module | 1 |
| 1-Channel Relay Module | 1 |
| LED Lamps | 6 |
| Resistor (220Ω / 1kΩ) | 1 |
| Jumper Wires | As needed |

---

## 🔌 Wiring Schema

### 1. Control Side (Input)
| Module | Module Pin | Arduino Pin |
| :--- | :--- | :--- |
| **LDR** | VCC | 5V |
| **LDR** | GND | GND |
| **LDR** | AO | A0 |
| **Relay** | DC+ | 5V |
| **Relay** | DC- | GND |
| **Relay** | IN | Pin 9 |

### 2. Load Side (Light Output)
> **Warning:** Ensure the Adapter's Ground (-) is connected to the Arduino's GND (**Common Ground**) for stable operation.

- **Adapter (+)** $\rightarrow$ Relay **COM** Terminal
- **Relay NO Terminal** $\rightarrow$ **Resistor** $\rightarrow$ **Anode (Long Leg)** of 6 LEDs
- **Cathode (Short Leg)** of 6 LEDs $\rightarrow$ **Adapter Negative (-)** & **Arduino GND**

![Image 1](./images/board1.jpg)
![Image 2](./images/board2.jpg)