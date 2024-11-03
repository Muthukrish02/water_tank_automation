# water_tank_automation
![Screenshot 2024-11-03 141712](https://github.com/user-attachments/assets/927ef694-bc3b-4cd6-b98c-40a8800910c7)

#  Water Tank Automation System
  This project is a water tank automation system that uses an Arduino to control the water level in a tank. The system monitors water conductivity levels to determine if the tank needs refilling and activates a motor via a relay module to fill the tank when necessary. An LCD display shows real-time information about the tank status.

# Table of Contents
Project Overview
 Components
 Circuit Diagram
 Setup and Wiring
 How It Works
 Benefits
 License
# Project Overview
This water tank automation system automates the refilling process of a water tank by monitoring water conductivity levels. When the water level is low, the system automatically turns on a motor to pump water into the tank. Once the tank is filled to the required level, the system turns off the motor. This ensures efficient water management and prevents the tank from overflowing.

# Components
Arduino: Controls all components, processes inputs, and sends outputs.
LCD Display: Shows information from the Arduino about the tank's water level.
Relay Module: Switches the motor on or off, controlled by the Arduino.
Motor: Operated by the relay module to pump water.
Conductivity Sensor: Measures the water level by detecting conductivity, helping to determine if the tank is empty or full.
AC Input: Supplies power to the motor via the relay.
# Circuit Diagram
Refer to the provided circuit diagram for detailed wiring and component placement.
![Screenshot 2024-11-03 141932](https://github.com/user-attachments/assets/611613f5-e81a-4167-9552-f3847d7190d3)

# Setup and Wiring
Connect the Conductivity Sensor to an analog input on the Arduino to monitor water levels.
Wire the Relay Module to the Arduino, allowing it to control the motor.
Connect the Motor to the relay module, which will pump water into the tank when activated.
Connect the LCD Display to the Arduino for real-time status display.
Power the System using an AC input to drive the motor.
# How It Works
The Conductivity Sensor monitors the water level in the tank.
When the sensor detects a low water level, it sends a signal to the Arduino.
The Arduino then triggers the Relay Module to turn on the motor, which pumps water into the tank.
When the water reaches the required level, the conductivity sensor detects it, and the Arduino turns off the relay, stopping the motor.
The LCD Display shows the current status, such as "Filling" or "Full," for easy monitoring.
# Benefits
Water Conservation: Automates tank filling, preventing overflow and water wastage.
Energy Efficiency: Ensures the motor only runs when necessary, reducing energy consumption.
User Convenience: Provides a hassle-free solution for maintaining water levels.
# License
This project is open-source and free to use and modify.
